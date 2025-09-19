#include "as.h"

const char progname[] = "wrasm";
const struct versioninfo_t versioninfo = { 0, 0, 1, "alpha" };
const char helpstr[] =
	"The wrasm assembler\n"
	"\n"
	"A risc-V macro assembler based on nasm (see https://nasm.us/)\n"
	"Currently still being built\n";

struct cmdargs_t cmdargs;

void *argtable[6];
static void free_argtable(void);

void parse_cmdargs(int argc, char *argv[])
{
	const char *progcall = argv[0];

	argtable[0] = cmdargs.help =
		arg_litn("h", "help", 0, 1, "display this help and exit");
	argtable[1] = cmdargs.version =
		arg_litn("V", "version", 0, 1, "display version info and exit");
	argtable[2] = cmdargs.verbose =
		arg_litn("v", "verbose", 0, 1, "verbose output");
	argtable[3] = cmdargs.inputfile =
		arg_filen(NULL, NULL, "<input>", 1, 3, "input file");
	argtable[4] = cmdargs.outputfile =
		arg_filen("o", "output", "<filename>", 1, 3, "output file");
	argtable[5] = cmdargs.end = arg_end(20);

//	atexit(&free_argtable);

	int nerrors = arg_parse(argc, argv, argtable);

	if (cmdargs.help->count) {
		printf("Usage: %s", progcall);
		arg_print_syntax(stdout, argtable, "\n");
		puts(helpstr);
		arg_print_glossary(stdout, argtable, "  %-25s %s\n");
		exit(0);
	}

	if (cmdargs.version->count) {
		printf("%s version %d.%d.%d %s\n", progname, versioninfo.major,
		       versioninfo.minor, versioninfo.patch, versioninfo.note);
		exit(0);
	}

	if (cmdargs.inputfile->count > 1 || cmdargs.outputfile->count > 1)
		nerrors++;

	if (nerrors) {
		arg_print_errors(stdout, cmdargs.end, progname);
		printf("Try '%s --help' for more information\n", progcall);
		exit(1);
	}

	if (cmdargs.verbose->count) {
		set_min_loglevel(DEBUG);
	}
}

static void free_argtable(void)
{
	arg_freetable(argtable, ARRAY_LENGTH(argtable));
}

size_t linenumber;

const char *level_names[6] = {
	"debug", "info", "warning", "error", "critical", "none",
};
const char *level_colours[6] = {
	"",
	"\033[0;36;1m",
	"\033[0;35;1m",
	"\033[0;31;1m",
	"\033[1;31;1m",
	"\033[1m",
};
size_t level_instances[6] = { 0 };

static enum loglvl_t minloglevel = WARN;
static enum loglvl_t exitloglevel = ERROR;

void set_min_loglevel(enum loglvl_t level)
{
	minloglevel = level;
	logger(INFO, no_error, "Log level set to %s%s\033[0m",
	       level_colours[minloglevel], level_names[minloglevel]);
}

void set_exit_loglevel(enum loglvl_t level)
{
	exitloglevel = level;
	logger(INFO, no_error, "Exit log level set to %s%s\033[0m",
	       level_colours[exitloglevel], level_names[exitloglevel]);
}

void logger(enum loglvl_t level, enum error_t id, const char *format, ...)
{
	level_instances[level]++;
	if (level < minloglevel)
		return;

	FILE *out = stderr;

	fprintf(out, "%s: %s0x%.02x\033[0m / %s%s\033[0m ", progname,
		level_colours[level], id, level_colours[level],
		level_names[level]);
	if (linenumber)
		fprintf(out, "- %sL%lu\033[0m ", level_colours[level],
			(unsigned long)linenumber);

	va_list format_params;
	va_start(format_params, format);
	vfprintf(out, format, format_params);
	va_end(format_params);

	fputc('\n', out);

	if (level >= exitloglevel)
		exit(1);
}

int get_clean_exit(enum loglvl_t level)
{
	for (; level <= NODEBUG; level++)
		if (level_instances[level])
			return 1;
	return 0;
}

/*
 * custom getline implementation for cross platform support removes newline at
 * end of line and therefore not compatible with GNU/POSIX getline
 */
size_t getl(char **lineptr, size_t *n, FILE *stream)
{
	char *bufptr = NULL;
	char *p = bufptr;
	size_t size;
	int c;

	if (lineptr == NULL)
		return (size_t)-1;
	if (stream == NULL)
		return (size_t)-1;
	if (n == NULL)
		return (size_t)-1;

	bufptr = *lineptr;
	size = *n;

	c = fgetc(stream);
	if (c == EOF)
		return (size_t)-1;

	if (!bufptr) {
		size = 128;
		bufptr = xmalloc(size);
	}
	p = bufptr;
	while (c != EOF) {
		if ((size_t)(p - bufptr) > (size - 1)) {
			size = size + 128;
			bufptr = xrealloc(bufptr, size);
		}
		if (c == '\n')
			break;
		*p++ = (char)c;
		c = fgetc(stream);
	}

	*(p++) = '\0';
	*lineptr = bufptr;
	*n = size;

	return (size_t)(p - bufptr - 1);
}

struct sectionpos get_outputpos(void);
int parse_line(char *line, struct sectionpos position);

void parse_file(FILE *ifp, FILE *ofp)
{
	char *line = NULL;
	size_t linesize = 0;
	size_t nread;

	linenumber = 0;

	fseek(ifp, 0L, SEEK_SET);

	while ((nread = getl(&line, &linesize, ifp)) != (size_t)-1) {
		linenumber++;
		logger(DEBUG, no_error, "Parsing line \"%s\"", line);
		if (parse_line(line, get_outputpos()))
			return;
		logger(DEBUG, no_error, " | Finished parsing line");
	}

	linenumber = 0;

	calc_strtab();
	calc_symtab();
	alloc_output();

	write_all();

	free(line);

	linenumber = 0;

	fill_strtab();
	fill_symtab();

	flush_output(ofp);

	free_output();
	free_instructions();
	free_data();
	free_symbols();
}

static inline int parse_line_trimmed(char *, struct sectionpos);
int parse_line(char *line, struct sectionpos position)
{
	char *trimmed_line = trim_whitespace(line);
	const int result = parse_line_trimmed(trimmed_line, position);
	free(trimmed_line);
	return result;
}

static inline int parse_line_trimmed(char *line, struct sectionpos position)
{
	logger(DEBUG, no_error, " |-> \"%s\"", line);

	switch (*line) {
	case '\0':
	case ';':
		return 0;
	case '.':
	case '[':
		return parse_directive(line);
	case '/':
		if (line[1] == '/')
			return 0;
	}

	if (strchr(line, ':'))
		return parse_label(line, position);

	return parse_asm(line, position);
}

int parse_label(char *line, struct sectionpos position)
{
	char *end = strchr(line, ':');
	/* check for invalid label definition */
	if (end == NULL)
		return 0;

	logger(DEBUG, no_error, "Creating label (%s)", line);

	*(end++) = '\0';
	char *name = trim_whitespace(line);
	struct symbol *label = get_or_create_symbol(name, SYMBOL_LABEL);
	free(name);

	const struct sectionpos fpos = get_outputpos();
	if (fpos.offset == (size_t)-1) {
		logger(CRITICAL, error_system,
		       "Unable to determine section file position");
		return 1;
	}

	label->section = fpos.section;
	label->value = (long)fpos.offset;

	logger(DEBUG, no_error, "Moving on to line (%s %p)", end, end);
	return parse_line(end, position);
}

int parse_preprocessor(const char *line)
{
	/* TODO: implement preprocessor stuff */
	(void)line;
	logger(WARN, error_not_implemented, "Preprocessor not implemented");
	return 0;
}


const struct args empty_args = {
	.rd = 0,
	.rs1 = 0,
	.rs2 = 0,
	.imm = 0,
	.sym = NULL,
};

static char *trim_arg(char *s)
{
	const char *tok = strtok(s, ",");
	if (!tok)
		return NULL;
	return trim_whitespace(tok);
}

static uint8_t expect_reg(char *arg)
{
	size_t reg = get_register_id(arg);
	if (reg == (size_t)-1)
		logger(ERROR, error_instruction_other,
		       "Expected register but got %s", arg);
	return (uint8_t)reg;
}

static void expect_offreg(char *arg, int32_t *offset, uint8_t *reg)
{
	*offset = (int32_t)strtol(arg, &arg, 0);

	while (isspace(*arg))
		arg++;

	if (*arg != '(')
		logger(ERROR, error_instruction_other,
		       "Expected '(' but got '%c'", *arg);
	arg++;
	char *closing = arg;
	while (*closing != ')') {
		if (!*closing) {
			logger(ERROR, error_instruction_other,
			       "Expected closing parenthesis");
			return;
		}
		closing++;
	}
	*closing = '\0';

	size_t r = get_register_id(arg);

	if (r == (size_t)-1)
		logger(ERROR, error_instruction_other,
		       "Expected register but got %s", arg);

	*reg = (uint8_t)r;

	closing++;
	if (*closing)
		logger(ERROR, error_instruction_other,
		       "Received unexpected expression \"%s\"", closing);
}

static uint32_t expect_imm(char *arg)
{
	size_t imm;
	if (get_immediate(arg, &imm))
		logger(ERROR, error_instruction_other,
		       "Expected immediate but got %s", arg);
	return (uint32_t)imm;
}

static uint16_t expect_csr(char *arg)
{
	const uint16_t csr = get_csr(arg);
	if (csr == 0xFFFF)
		logger(ERROR, error_instruction_other,
		       "Expected valid control/status register but got %s",
		       arg);
	return csr;
}

static int expect_one_arg(char *first)
{
	if (strtok(NULL, ",")) {
		logger(ERROR, error_instruction_other,
		       "Instruction has more than one argument");
		return 0;
	}

	if (!first) {
		logger(ERROR, error_instruction_other,
		       "Expected one argument, not none");
		return 1;
	}
	return 0;
}

static int expect_two_args(char *first, char *second)
{
	if (strtok(NULL, ",")) {
		logger(ERROR, error_instruction_other,
		       "Instruction has more than two arguments");
		return 0;
	}

	if (!first) {
		logger(ERROR, error_instruction_other,
		       "Expected two arguments, not none");
		return 1;
	}
	if (!second) {
		logger(ERROR, error_instruction_other,
		       "Expected two arguments, not one");
		free(first);
		return 1;
	}
	return 0;
}

static int expect_three_args(char *first, char *second, char *third)
{
	if (strtok(NULL, ",")) {
		logger(ERROR, error_instruction_other,
		       "Instruction has more than three arguments");
		return 0;
	}

	if (!first) {
		logger(ERROR, error_instruction_other,
		       "Expected three arguments, not none");
		return 1;
	}
	if (!second) {
		logger(ERROR, error_instruction_other,
		       "Expected three arguments, not one");
		free(first);
		return 1;
	}
	if (!third) {
		logger(ERROR, error_instruction_other,
		       "Expected three arguments, not two");
		free(first);
		free(second);
		return 1;
	}
	return 0;
}

int parse_asm(const char *linestr, struct sectionpos position)
{
	logger(DEBUG, no_error, "Parsing assembly %s", linestr);

	char *line = xmalloc(strlen(linestr) + 1);
	strncpy(line, linestr, strlen(linestr) + 1);

	char *instruction = strtok(line, " \t");
	char *argstr = strtok(NULL, "");

	const struct formation formation = parse_form(instruction);
	const struct args args = formation.arg_handler(argstr);

	free(line);

	add_instruction((struct instruction){
		.formation = formation,
		.args = args,
		.line = linenumber,
		.position = position,
	});
	inc_outputsize(position.section, formation.idata.sz);
	logger(DEBUG, no_error, "Updated position to offset (%zu)",
	       position.offset);

	return 0;
}

struct args parse_none(char *argstr)
{
	logger(DEBUG, no_error,
	       "Parsing arguments for no argument instruction");

	if (!argstr)
		return empty_args;

	for (char *c = argstr; *c; c++)
		if (*c == ',')
			logger(ERROR, error_instruction_other,
			       "Expected zero arguments, but got at least one");

	return empty_args;
}

struct args parse_rtype(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for rtype instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);
	char *third = trim_arg(NULL);

	logger(DEBUG, no_error, "Parsed %s, %s, %s", first, second, third);

	if (expect_three_args(first, second, third))
		return empty_args;

	const struct args args = {
		.rd = expect_reg(first),
		.rs1 = expect_reg(second),
		.rs2 = expect_reg(third),
		.sym = NULL,
	};

	free(first);
	free(second);
	free(third);

	logger(DEBUG, no_error, "Registers parsed x%d, x%d, x%d", args.rd,
	       args.rs1, args.rs2);

	return args;
}

struct args parse_itype(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);
	char *third = trim_arg(NULL);

	if (expect_three_args(first, second, third))
		return empty_args;

	const struct args args = {
		.rd = expect_reg(first),
		.rs1 = expect_reg(second),
		.imm = expect_imm(third),
		.sym = NULL,
	};

	free(first);
	free(second);
	free(third);

	logger(DEBUG, no_error, "Registers parsed x%d, x%d, %d", args.rd,
	       args.rs1, args.imm);

	return args;
}

struct args parse_ltype(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);

	if (expect_two_args(first, second))
		return empty_args;

	struct args args = {
		.rd = expect_reg(first),
		.sym = NULL,
	};

	expect_offreg(second, &args.imm, &args.rs1);

	free(first);
	free(second);

	logger(DEBUG, no_error, "Registers parsed x%d, %d(x%d)", args.rd,
	       args.imm, args.rs1);

	return args;
}

struct args parse_stype(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);

	if (expect_two_args(first, second))
		return empty_args;

	struct args args = {
		.rs2 = expect_reg(second),
		.sym = NULL,
	};

	expect_offreg(first, &args.imm, &args.rs1);

	free(first);
	free(second);

	logger(DEBUG, no_error, "Registers parsed %d(x%d), x%d", args.imm,
	       args.rs1, args.rs2);

	return args;
}

struct args parse_utype(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for utype instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);

	if (expect_two_args(first, second))
		return empty_args;

	const struct args args = {
		.rd = expect_reg(first),
		.imm = expect_imm(second),
		.sym = NULL,
	};

	free(first);
	free(second);

	logger(DEBUG, no_error, "Registers parsed x%d, %d", args.rd, args.imm);

	return args;
}

struct args parse_btype(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for jtype instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);
	char *third = trim_arg(NULL);

	if (expect_three_args(first, second, third))
		return empty_args;

	const struct args args = {
		.rs1 = expect_reg(first),
		.rs2 = expect_reg(second),
		.sym = get_or_create_symbol(third, SYMBOL_LABEL),
	};

	free(first);
	free(second);
	free(third);

	logger(DEBUG, no_error, "Registers parsed x%d, x%d, %s", args.rs1,
	       args.rs2, args.sym->name);

	return args;
}

struct args parse_bztype(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for bztype instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);

	if (expect_two_args(first, second))
		return empty_args;

	const struct args args = {
		.rs1 = expect_reg(first),
		.sym = get_or_create_symbol(second, SYMBOL_LABEL),
	};

	free(first);
	free(second);

	logger(DEBUG, no_error, "Registers parsed x%d, %s", args.rs1,
	       args.sym->name);

	return args;
}

struct args parse_pseudo(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments %s for pseudo instruction",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);

	if (expect_two_args(first, second))
		return empty_args;

	const struct args args = {
		.rd = expect_reg(first),
		.rs1 = expect_reg(second),
		.sym = NULL,
	};

	free(first);
	free(second);

	logger(DEBUG, no_error, "Registers parsed x%d, x%d", args.rd, args.rs1);

	return args;
}

static int parse_fence_arg(const char *arg)
{
	const char *key = "iorw";
	int iorw = 0;
	for (const char *c = key; *c; c++) {
		iorw <<= 1;
		if (*c != *arg)
			continue;
		iorw |= 1;
		arg++;
	}
	if (*arg)
		logger(ERROR, error_instruction_other,
		       "expected combination of iorw but encountered '%c' character",
		       *arg);
	return iorw;
}

struct args parse_fence(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments %s for fence instruction",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);

	if (!first)
		return (struct args){
			.rd = 0x0,
			.rs1 = 0x0,
			.imm = 0xFF,
			.sym = NULL,
		};

	if (strtok(NULL, ","))
		logger(ERROR, error_instruction_other,
		       "Instruction has more than two arguments");

	if (!second) {
		logger(ERROR, error_instruction_other,
		       "Expected two arguments but got one");
		return empty_args;
	}

	const int predecessor = parse_fence_arg(first);
	const int successor = parse_fence_arg(second);

	free(first);
	free(second);

	return (struct args){
		.rd = 0x0,
		.rs1 = 0x0,
		.imm = (predecessor << 4) | successor,
		.sym = NULL,
	};
}

struct args parse_jal(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for jal instruction %s",
	       argstr);

	struct args args = { .rd = 1 };

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);
	char *sym = first;

	if (strtok(NULL, ","))
		logger(ERROR, error_instruction_other,
		       "Expected at most two arguments");

	if (!first) {
		logger(ERROR, error_invalid_instruction,
		       "Expected at least one argument");
		return empty_args;
	}

	if (second) {
		args.rd = expect_reg(first);
		free(first);
		sym = second;
		if (!sym)
			logger(ERROR, error_invalid_instruction,
			       "Expected a second argument");
	}

	args.sym = get_or_create_symbol(sym, SYMBOL_LABEL);
	free(sym);

	logger(DEBUG, no_error, "Registers parsed, x%d, %s", args.rd,
	       args.sym->name);

	return args;
}

struct args parse_jalr(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for jalr instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);
	char *third = trim_arg(NULL);

	if (strtok(NULL, ","))
		logger(ERROR, error_instruction_other,
		       "Instruction has more than three arguments");

	if (!first) {
		logger(DEBUG, error_instruction_other,
		       "Expected at least one argument");
		return empty_args;
	}

	const uint8_t rd = expect_reg(first);
	free(first);

	if (!second) {
		logger(DEBUG, no_error, "jalr (pseudo) arguments parsed -> x%d",
		       rd);
		return (struct args){
			.rd = 0x1,
			.rs1 = rd,
			.imm = 0,
			.sym = NULL,
		};
	}

	if (!third) {
		logger(ERROR, error_instruction_other,
		       "Expected one or three arguments but got two");
		free(second);
		return empty_args;
	}

	const uint8_t rs1 = expect_reg(second);
	const uint32_t imm = expect_imm(third);

	free(second);
	free(third);

	logger(DEBUG, no_error, "jalr arguments parsed x%d x%d %d", rd, rs1,
	       imm);

	return (struct args){
		.rd = rd,
		.rs1 = rs1,
		.imm = imm,
		.sym = NULL,
	};
}

struct args parse_la(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments %s for la instruction",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);

	if (expect_two_args(first, second))
		return empty_args;

	const struct args args = {
		.rd = expect_reg(first),
		.sym = get_or_create_symbol(second, SYMBOL_LABEL),
	};

	free(first);
	free(second);

	logger(DEBUG, no_error, "Registers parsed x%d x%d", args.rd, args.rs1);

	return args;
}

struct args parse_li(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments %s for li instruction",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);

	if (expect_two_args(first, second))
		return empty_args;

	const struct args args = {
		.rd = expect_reg(first),
		.imm = expect_imm(second),
		.sym = NULL,
	};

	free(first);
	free(second);

	logger(DEBUG, no_error, "Registers parsed x%d x%d", args.rd, args.rs1);

	return args;
}

struct args parse_j(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments %s for li instruction",
	       argstr);

	char *first = trim_arg(argstr);

	if (expect_one_arg(first))
		return empty_args;

	const struct args args = {
		.sym = get_or_create_symbol(first, SYMBOL_LABEL),
	};

	logger(DEBUG, no_error, "Symbol parsed %s", args.sym->name);

	return args;
}

struct args parse_jr(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments %s for li instruction",
	       argstr);

	char *first = trim_arg(argstr);

	if (expect_one_arg(first))
		return empty_args;

	const struct args args = {
		.rs1 = expect_reg(first),
		.sym = NULL,
	};

	free(first);

	logger(DEBUG, no_error, "Register parsed x%d", args.rs1);

	return args;
}

struct args parse_ftso(char *argstr)
{
	logger(DEBUG, no_error,
	       "Parsing arguments for no argument instruction");

	const struct args args = {
		.rd = 0x0,
		.rs1 = 0x0,
		.imm = 0x833,
		.sym = NULL,
	};

	if (!argstr)
		return args;

	for (char *c = argstr; *c; c++)
		if (*c == ',')
			logger(ERROR, error_instruction_other,
			       "Expected zero arguments");

	return args;
}

struct args parse_al(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);

	if (expect_two_args(first, second))
		return empty_args;

	struct args args = {
		.rd = expect_reg(first),
		.rs2 = 0,
		.sym = NULL,
	};

	expect_offreg(second, &args.imm, &args.rs1);

	if (args.imm)
		logger(ERROR, error_invalid_instruction,
		       "Optional integer offset must be zero");

	free(first);
	free(second);

	logger(DEBUG, no_error, "Registers parsed x%d %d(x%d)", args.rd,
	       args.imm, args.rs1);

	return args;
}

struct args parse_as(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for itype instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);
	char *third = trim_arg(NULL);

	if (expect_three_args(first, second, third))
		return empty_args;

	struct args args = {
		.rd = expect_reg(first),
		.rs2 = expect_reg(second),
	};

	expect_offreg(third, &args.imm, &args.rs1);

	if (args.imm)
		logger(ERROR, error_invalid_instruction,
		       "Optional integer offset must be zero");

	free(first);
	free(second);
	free(third);

	logger(DEBUG, no_error, "Registers parsed x%d x%d %d(x%d)", args.rd,
	       args.rs2, args.imm, args.rs1);

	return args;
}

struct args parse_csr(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for csr instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);
	char *third = trim_arg(NULL);

	if (expect_three_args(first, second, third))
		return empty_args;

	struct args args = {
		.rd = expect_reg(first),
		.imm = expect_csr(second),
		.rs1 = expect_reg(third),
	};

	free(first);
	free(second);
	free(third);

	logger(DEBUG, no_error, "Registers parsed x%d, x%d, 0x%.03X", args.rd,
	       args.rs1, args.imm);

	return args;
}

struct args parse_csri(char *argstr)
{
	logger(DEBUG, no_error, "Parsing arguments for csri instruction %s",
	       argstr);

	char *first = trim_arg(argstr);
	char *second = trim_arg(NULL);
	char *third = trim_arg(NULL);

	if (expect_three_args(first, second, third))
		return empty_args;

	struct args args = {
		.rd = expect_reg(first),
		.imm = expect_csr(second),
		.rs1 = (uint8_t)(expect_imm(third) & 0x1F),
	};

	free(first);
	free(second);
	free(third);

	logger(DEBUG, no_error, "Registers parsed x%d, 0x%X, 0x%.03X", args.rd,
	       args.rs1, args.imm);

	return args;
}


int is_terminating(char c)
{
	return !c || c == ';' || c == '\n';
}

char *trim_whitespace(const char *str)
{
	const char *start = str;
	while (isspace(*start) && !is_terminating(*start))
		start++;

	const char *end = start;
	while (!is_terminating(*end))
		end++;

	while (isspace(*end) && end > start)
		end--;

	char *newstr = xmalloc((size_t)(end - start + 1));
	memcpy(newstr, start, (size_t)(end - start));
	newstr[end - start] = '\0';

	return newstr;
}


static void die(const char *function)
{
	logger(CRITICAL, error_system, "Call to %s failed", function);
	exit(1);
}

void *xmalloc(size_t sz)
{
	void *ptr = malloc(sz);
	if (!ptr)
		die("malloc");
	return ptr;
}

void *xcalloc(size_t nitems, size_t size)
{
	void *ptr = calloc(nitems, size);
	if (!ptr)
		die("calloc");
	return ptr;
}

void *xrealloc(void *ptr, size_t size)
{
	ptr = realloc(ptr, size);
	if (!ptr)
		die("xrealloc");
	return ptr;
}


static struct instruction *instructions = NULL;
static size_t instructions_size = 0;
static struct rawdata *dataitems = NULL;
static size_t dataitems_size = 0;

int add_instruction(struct instruction instruction)
{
	const size_t sz = instructions_size + 1;
	instructions = xrealloc(instructions, sz * sizeof(*instructions));
	instructions[instructions_size] = instruction;
	instructions_size = sz;

	return 0;
}

int add_data(struct rawdata dataitem)
{
	const size_t sz = dataitems_size + 1;
	struct rawdata *newdataarr =
		xrealloc(dataitems, sz * sizeof(*dataitems));

	if (newdataarr == NULL) {
		logger(ERROR, error_internal, 0,
		       "Unable to allocate memory for label instruction");
		return 1;
	}

	dataitems = newdataarr;
	dataitems[dataitems_size] = dataitem;
	dataitems_size = sz;

	return 0;
}

int write_all(void)
{
	if (write_all_instructions())
		return 1;
	if (write_all_data())
		return 1;
	return 0;
}

int write_all_instructions(void)
{
	linenumber = 0;
	logger(DEBUG, no_error, "Generating all instruction bytecode...");
	for (size_t i = 0; i < instructions_size; i++)
		if (write_instruction(instructions[i]))
			return 1;
	return 0;
}

int write_instruction(struct instruction i)
{
	linenumber = i.line;
	logger(DEBUG, no_error,
	       "Generating bytecode for %s instruction (offset: %zu)",
	       i.formation.name, i.position.offset);
	set_section(i.position.section);

	if (i.args.sym)
		if (i.args.sym->section == SECTION_NULL)
			logger(ERROR, error_unknown, "Symbol %s not found",
			       i.args.sym->name);

	struct bytecode bytecode =
		i.formation.form_handler(i.formation.name, i.formation.idata,
					 i.args, calc_fileoffset(i.position));
	logger(DEBUG, no_error, "Bytecode finished generating");
	if (!bytecode.size) {
		logger(WARN, no_error,
		       "No bytecode generated from instruction");
		return 0;
	}
	if (!bytecode.data) {
		logger(ERROR, error_internal, "Received invalid bytecode");
		return 1;
	}
	const size_t sz = (size_t)bytecode.size;
	size_t nwritten =
		write_sectiondata((char *)bytecode.data, sz, i.position);
	free(bytecode.data);
	if (nwritten != sz) {
		logger(CRITICAL, error_system, "Error writing bytes to output");
		return 1;
	}
	return 0;
}

int write_all_data(void)
{
	linenumber = 0;
	logger(DEBUG, no_error, "Writing all data bytes...");
	for (size_t i = 0; i < dataitems_size; i++)
		if (write_data(dataitems[i]))
			return 1;
	return 0;
}

int write_data(struct rawdata data)
{
	linenumber = data.line;
	logger(DEBUG, no_error, "Writing data (offset: %zu)",
	       data.position.offset);
	set_section(data.position.section);
	const size_t written =
		write_sectiondata(data.data, data.size, data.position);
	free(data.data);
	if (written != data.size) {
		logger(CRITICAL, error_system, "Error writing bytes to output");
		return 1;
	}
	return 0;
}

void free_instructions(void)
{
	free(instructions);
	instructions = NULL;
	instructions_size = 0;
}

void free_data(void)
{
	free(dataitems);
	dataitems = NULL;
	dataitems_size = 0;
}

struct directive {
	const char *name;
	int (*parser)(const char *);
};
struct directive directive_map[] = {
	{ ".string", parse_asciz }, { ".asciz", parse_asciz },
	{ ".ascii", parse_ascii },  { ".section", parse_section },
	{ ".globl", parse_global },
};
struct {
	const char *name;
	enum sections section;
} section_map[] = {
	{ ".text", SECTION_TEXT },
	{ ".data", SECTION_DATA },
};

static struct directive get_directive(const char *name)
{
	for (unsigned long i = 0; i < ARRAY_LENGTH(directive_map); i++)
		if (!strcmp(name, directive_map[i].name))
			return directive_map[i];
	logger(ERROR, error_invalid_instruction,
	       "Unknown directive found with name: %s", name);
	return (struct directive){ NULL, NULL };
}

int parse_directive(char *line)
{
	char *directivename = line;
	while (!isspace(*line))
		line++;
	if (*line)
		*(line++) = '\0';

	struct directive directive = get_directive(directivename);

	if (directive.parser == NULL)
		return 1;

	char *args = trim_whitespace(line);
	const int result = directive.parser(args);
	free(args);
	return result;
}

static char get_escapedchar(const char **str)
{
	switch (**str) {
	case 'x':
	case 'u': {
		char *end;
		long val = strtol(*str + 1, &end, (**str == 'x') ? 16 : 8);
		if (val >= 256 || val < 0) {
			logger(ERROR, error_invalid_instruction,
			       "Escape sequence out of range");
			return '\0';
		}
		*str = end - 1;
		return (char)val;
	}
	case 'a':
		return '\a';
		break;
	case 'b':
		return '\b';
	case 'f':
		return '\f';
	case 'n':
		return '\n';
	case 'r':
		return '\r';
	case 't':
		return '\t';
	case 'v':
		return '\v';
	case '\\':
		return '\\';
	case '"':
		return '"';
	}
	return '\0';
}

static inline size_t parse_nulltermstr(char *dest, const char *str)
{
	if (*str != '"')
		return (size_t)-1;
	str++;
	size_t size = 0;
	while (*str != '"') {
		register char val = *str;
		if (!val) {
			logger(ERROR, error_invalid_syntax,
			       "Expected '\"' (0x22 double quote) character at start or end of "
			       "ascii string");
			return (size_t)-1;
		}
		if (val == '\\') {
			str++;
			val = get_escapedchar(&str);
		}
		dest[size] = val;
		size++;
		str++;
	}
	dest[size] = '\0';
	size++;
	str++;
	return size;
}

static int parse_ascii_generic(const char *str, bool nullterm)
{
	char *parsed = xmalloc(strlen(str) - 1);
	const size_t size = parse_nulltermstr(parsed, str) - !nullterm;
	if (size == (size_t)-1)
		return 1;
	char *data = xmalloc(size);
	memcpy(data, parsed, size);
	free(parsed);
	const struct sectionpos position = get_outputpos();
	const int res = add_data((struct rawdata){ .data = data,
						   .size = size,
						   .position = position,
						   .line = linenumber });
	inc_outputsize(position.section, size);
	return res;
}
int parse_asciz(const char *str)
{
	return parse_ascii_generic(str, true);
}
int parse_ascii(const char *str)
{
	return parse_ascii_generic(str, false);
}
int parse_section(const char *str)
{
	logger(DEBUG, no_error, "Selecting Section \"%s\"", str);
	for (unsigned long i = 0; i < ARRAY_LENGTH(section_map); i++) {
		if (!strcmp(str, section_map[i].name)) {
			change_output(section_map[i].section);
			return 0;
		}
	}
	logger(WARN, error_invalid_instruction, "Unknown Section \"%s\"", str);
	return 1;
}
int parse_global(const char *str)
{
	struct symbol *sym = get_or_create_symbol(str, SYMBOL_LABEL);
	if (!sym) {
		logger(ERROR, error_internal, "Uknown symbol %s encountered",
		       str);
		return 1;
	}
	sym->binding = 0x10;
	return 0;
}


const struct formation rv32a[] = {
	{ "lr.w", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x08 } },
	{ "lr.w.rl", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x09 } },
	{ "lr.w.aq", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x0A } },
	{ "lr.w.aqrl", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x0B } },
	{ "sc.w", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0C } },
	{ "sc.w.rl", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0D } },
	{ "sc.w.aq", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0E } },
	{ "sc.w.aqrl", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0F } },

	{ "amoswap.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x04 } },
	{ "amoswap.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x05 } },
	{ "amoswap.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x06 } },
	{ "amoswap.w.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x2, 0x07 } },
	{ "amoadd.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x00 } },
	{ "amoadd.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x01 } },
	{ "amoadd.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x02 } },
	{ "amoadd.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x03 } },
	{ "amoxor.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x10 } },
	{ "amoxor.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x12 } },
	{ "amoxor.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x11 } },
	{ "amoxor.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x13 } },
	{ "amoor.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x20 } },
	{ "amoor.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x21 } },
	{ "amoor.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x22 } },
	{ "amoor.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x23 } },
	{ "amoand.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x30 } },
	{ "amoand.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x31 } },
	{ "amoand.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x32 } },
	{ "amoand.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x33 } },
	{ "amomin.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x40 } },
	{ "amomin.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x41 } },
	{ "amomin.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x42 } },
	{ "amomin.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x43 } },
	{ "amomax.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x50 } },
	{ "amomax.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x51 } },
	{ "amomax.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x52 } },
	{ "amomax.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x53 } },
	{ "amominu.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x60 } },
	{ "amominu.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x61 } },
	{ "amominu.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x62 } },
	{ "amominu.w.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x2, 0x63 } },
	{ "amomaxu.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x70 } },
	{ "amomaxu.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x71 } },
	{ "amomaxu.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x72 } },
	{ "amomaxu.w.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x2, 0x73 } },

	END_FORMATION
};

const struct formation rv64a[] = {
	{ "lr.d", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x08 } },
	{ "lr.d.rl", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x09 } },
	{ "lr.d.aq", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x0A } },
	{ "lr.d.aqrl", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x0B } },
	{ "sc.d", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0C } },
	{ "sc.d.rl", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0D } },
	{ "sc.d.aq", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0E } },
	{ "sc.d.aqrl", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0F } },

	{ "amoswap.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x04 } },
	{ "amoswap.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x05 } },
	{ "amoswap.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x06 } },
	{ "amoswap.d.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x3, 0x07 } },
	{ "amoadd.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x00 } },
	{ "amoadd.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x01 } },
	{ "amoadd.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x02 } },
	{ "amoadd.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x03 } },
	{ "amoxor.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x10 } },
	{ "amoxor.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x12 } },
	{ "amoxor.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x11 } },
	{ "amoxor.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x13 } },
	{ "amoor.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x20 } },
	{ "amoor.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x21 } },
	{ "amoor.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x22 } },
	{ "amoor.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x23 } },
	{ "amoand.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x30 } },
	{ "amoand.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x31 } },
	{ "amoand.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x32 } },
	{ "amoand.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x33 } },
	{ "amomin.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x40 } },
	{ "amomin.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x41 } },
	{ "amomin.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x42 } },
	{ "amomin.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x43 } },
	{ "amomax.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x50 } },
	{ "amomax.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x51 } },
	{ "amomax.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x52 } },
	{ "amomax.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x53 } },
	{ "amominu.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x60 } },
	{ "amominu.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x61 } },
	{ "amominu.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x62 } },
	{ "amominu.d.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x3, 0x63 } },
	{ "amomaxu.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x70 } },
	{ "amomaxu.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x71 } },
	{ "amomaxu.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x72 } },
	{ "amomaxu.d.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x3, 0x73 } },

	END_FORMATION
};


/*
 * Clang can correctly optimise fully defined switches over enumerated values.
 * For other compilers, we create an unreachable segment of code, however for
 * clang we do nothing, as clang will raise an error if the switch is ever not
 * fully defined.
 */
#ifdef __clang__
#define FULLY_DEFINED_SWITCH()
#elif defined(__GNUC__)
#define FULLY_DEFINED_SWITCH() __builtin_unreachable()
#elif defined(_MSC_VER)
#define FULLY_DEFINED_SWITCH() __assume(0)
#else
#warning "compiler does not define __GNUC__ and is not MSVC"
#define FULLY_DEFINED_SWITCH() return error_bytecode
#endif

/* TODO: Add HINT instruction support */
const struct formation rv32i[] = {
	{ "nop", &form_nop, &parse_none, { 4, OP_OPI, 0, 0 } },

	{ "li", &form_load_pseudo, &parse_li, { 8, LOAD_IMM, 0, 0 } },
	{ "la", &form_load_pseudo, &parse_la, { 8, LOAD_ADDR, 0, 0 } },

	{ "mv", &form_math, &parse_pseudo, { 4, MATH_MV, 0, 0 } },
	{ "not", &form_math, &parse_pseudo, { 4, MATH_NOT, 0, 0 } },
	{ "neg", &form_math, &parse_pseudo, { 4, MATH_NEG, 0, 0 } },

	{ "seqz", &form_setif, &parse_pseudo, { 4, SETIF_EQZ, 0, 0 } },
	{ "snez", &form_setif, &parse_pseudo, { 4, SETIF_NEZ, 0, 0 } },
	{ "sltz", &form_setif, &parse_pseudo, { 4, SETIF_LTZ, 0, 0 } },
	{ "sgtz", &form_setif, &parse_pseudo, { 4, SETIF_GTZ, 0, 0 } },

	{ "beqz", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_EQZ, 0, 0 } },
	{ "bnez", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_NEZ, 0, 0 } },
	{ "blez", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_LEZ, 0, 0 } },
	{ "bgez", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_GEZ, 0, 0 } },
	{ "bltz", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_LTZ, 0, 0 } },
	{ "bgtz", &form_branchifz, &parse_bztype, { 4, BRANCHIFZ_GTZ, 0, 0 } },
	{ "bgt", &form_branchifr, &parse_btype, { 4, BRANCHIFR_GT, 0, 0 } },
	{ "ble", &form_branchifr, &parse_btype, { 4, BRANCHIFR_LE, 0, 0 } },
	{ "bgtu", &form_branchifr, &parse_btype, { 4, BRANCHIFR_GTU, 0, 0 } },
	{ "bleu", &form_branchifr, &parse_btype, { 4, BRANCHIFR_LEU, 0, 0 } },

	{ "j", &form_jump, &parse_j, { 4, JUMP_J, 0, 0 } },
	{ "jr", &form_jump, &parse_jr, { 4, JUMP_JR, 0, 0 } },
	{ "ret", &form_jump, &parse_none, { 4, JUMP_RET, 0, 0 } },

	{ "fence.tso", &form_itype, &parse_ftso, { 4, OP_MISC_MEM, 0x0, 0 } },

	{ "add", &form_rtype, &parse_rtype, { 4, OP_OP, 0x0, 0x00 } },
	{ "addi", &form_itype, &parse_itype, { 4, OP_OPI, 0x0, 0 } },
	{ "sub", &form_rtype, &parse_rtype, { 4, OP_OP, 0x0, 0x20 } },
	{ "and", &form_rtype, &parse_rtype, { 4, OP_OP, 0x7, 0x00 } },
	{ "andi", &form_itype, &parse_itype, { 4, OP_OPI, 0x7, 0 } },
	{ "or", &form_rtype, &parse_rtype, { 4, OP_OP, 0x6, 0x00 } },
	{ "ori", &form_itype, &parse_itype, { 4, OP_OPI, 0x6, 0 } },
	{ "xor", &form_rtype, &parse_rtype, { 4, OP_OP, 0x4, 0x00 } },
	{ "xori", &form_itype, &parse_itype, { 4, OP_OPI, 0x4, 0 } },
	{ "sll", &form_rtype, &parse_rtype, { 4, OP_OP, 0x1, 0x00 } },
	{ "srl", &form_rtype, &parse_rtype, { 4, OP_OP, 0x5, 0x00 } },
	{ "sra", &form_rtype, &parse_rtype, { 4, OP_OP, 0x5, 0x20 } },
	{ "slt", &form_rtype, &parse_rtype, { 4, OP_OP, 0x2, 0x00 } },
	{ "slti", &form_itype, &parse_itype, { 4, OP_OPI, 0x2, 0 } },
	{ "sltu", &form_rtype, &parse_rtype, { 4, OP_OP, 0x3, 0x00 } },
	{ "sltiu", &form_itype, &parse_itype, { 4, OP_OPI, 0x3, 0 } },

	{ "beq", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x0, 0 } },
	{ "bne", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x1, 0 } },
	{ "bge", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x5, 0 } },
	{ "bgeu", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x7, 0 } },
	{ "blt", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x4, 0 } },
	{ "bltu", &form_btype, &parse_btype, { 4, OP_BRANCH, 0x6, 0 } },

	{ "jal", &form_jtype, &parse_jal, { 4, OP_JAL, 0, 0 } },
	{ "jalr", &form_itype, &parse_jalr, { 4, OP_JALR, 0x0, 0 } },

	{ "ecall", &form_syscall, &parse_none, { 4, OP_SYSTEM, 0x0, 0x000 } },
	{ "ebreak", &form_syscall, &parse_none, { 4, OP_SYSTEM, 0x0, 0x001 } },

	{ "lb", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x0, 0 } },
	{ "lh", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x1, 0 } },
	{ "lw", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x2, 0 } },
	{ "lbu", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x4, 0 } },
	{ "lhu", &form_itype, &parse_ltype, { 4, OP_LOAD, 0x5, 0 } },

	{ "sb", &form_stype, &parse_stype, { 4, OP_STORE, 0x0, 0 } },
	{ "sh", &form_stype, &parse_stype, { 4, OP_STORE, 0x1, 0 } },
	{ "sw", &form_stype, &parse_stype, { 4, OP_STORE, 0x2, 0 } },

	{ "lui", &form_utype, &parse_utype, { 4, OP_LUI, 0, 0 } },
	{ "auipc", &form_utype, &parse_utype, { 4, OP_AUIPC, 0, 0 } },

	{ "fence", &form_itype, &parse_fence, { 4, OP_MISC_MEM, 0x0, 0 } },

	END_FORMATION
};

const struct formation rv64i[] = {
	{ "negw", &form_math, &parse_pseudo, { 4, MATH_NEGW, 0, 0 } },
	{ "sext.w", &form_math, &parse_pseudo, { 4, MATH_SEXTW, 0, 0 } },

	{ "addw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x0, 0x00 } },
	{ "addiw", &form_itype, &parse_itype, { 4, OP_OPI32, 0x0, 0 } },
	{ "subw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x0, 0x20 } },

	{ "slli", &form_itype, &parse_itype, { 4, OP_OPI, 0x1, 0x00 } },
	{ "sllw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x1, 0x00 } },
	{ "slliw", &form_itype, &parse_itype, { 4, OP_OPI32, 0x0, 0x00 } },
	{ "srli", &form_itype, &parse_itype, { 4, OP_OPI, 0x5, 0x00 } },
	{ "srlw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x5, 0x00 } },
	{ "srliw", &form_itype, &parse_itype, { 4, OP_OPI32, 0x5, 0 } },
	{ "srai", &form_itype2, &parse_itype, { 4, OP_OPI, 0x5, 0 } },
	{ "sraw", &form_rtype, &parse_rtype, { 4, OP_OP32, 0x5, 0x20 } },
	{ "sraiw", &form_itype2, &parse_itype, { 4, OP_OPI32, 0x5, 0 } },

	{ "lwu", &form_itype, &parse_itype, { 4, OP_LOAD, 0x6, 0 } },
	{ "ld", &form_itype, &parse_itype, { 4, OP_LOAD, 0x3, 0 } },
	{ "sd", &form_stype, &parse_stype, { 4, OP_STORE, 0x3, 0 } },

	END_FORMATION
};

struct bytecode form_syscall(const char *name, struct idata instruction,
			     struct args args, size_t position)
{
	(void)args;
	(void)position;
	logger(DEBUG, no_error, "Generating syscall %s", name);

	const uint32_t opcode = instruction.opcode;
	const uint32_t funct3 = instruction.funct3;
	const uint32_t funct7 = instruction.funct7;

	assert(instruction.sz == 4);

	struct bytecode res = {
		.size = 4,
		.data = xmalloc(4),
	};
	*(uint32_t *)res.data = opcode | (funct3 << 12) | (funct7 << 20);
	return res;
}

struct bytecode form_nop(const char *name, struct idata instruction,
			 struct args args, size_t position)
{
	(void)args;
	(void)position;
	logger(DEBUG, no_error, "Generating nop instruction %s", name);

	return form_itype(name, instruction,
			  (struct args){ .rd = 0, .rs1 = 0, .imm = 0 },
			  position);
}

int32_t calc_symbol_offset(const struct symbol *sym, size_t position);

struct bytecode form_load_pseudo(const char *name, struct idata instruction,
				 struct args args, size_t position)
{
	logger(DEBUG, no_error, "Generating load instruction %s", name);

	enum load_pseudo type = instruction.opcode;
	uint8_t rd = args.rd;

	uint8_t opcode;
	uint32_t value;
	switch (type) {
	case LOAD_IMM:
		opcode = OP_LUI;
		value = args.imm;
		break;
	case LOAD_ADDR:
		opcode = OP_AUIPC;
		value = (uint32_t)calc_symbol_offset(args.sym, position);
		break;
	default:
		UNREACHABLE();
#ifdef NO_UNREACHABLE
		/* ensure warnings aren't emitted if the UNREACHABLE hint
		 * can't be defined */
		opcode = 0;
		value = 0;
		break;
#endif
	}

	logger(DEBUG, no_error, "Load psuedoinstruction has value %d", value);

	const char *uppernames[] = { "lui (li)", "auipc (la)" };
	const char *lowernames[] = { "addi (li)", "addi (la)" };

	struct bytecode upper = form_utype(uppernames[type],
					   (struct idata){ 4, opcode, 0, 0 },
					   (struct args){
						   .rd = rd,
						   .imm = value & 0xFFFFF000,
					   },
					   position);
	struct bytecode lower = form_itype(lowernames[type],
					   (struct idata){ 4, OP_OPI, 0x0, 0 },
					   (struct args){
						   .rd = rd,
						   .rs1 = rd,
						   .imm = value & 0xFFF,
					   },
					   position + 4);

	unsigned char *data = malloc(upper.size + lower.size);
	memcpy(data, upper.data, upper.size);
	memcpy(data + upper.size, lower.data, lower.size);

	free(upper.data);
	free(lower.data);

	return (struct bytecode){
		.size = upper.size + lower.size,
		.data = data,
	};
}

struct bytecode form_math(const char *name, struct idata instruction,
			  struct args args, size_t position)
{
	logger(DEBUG, no_error, "Generating math instruction %s", name);

	const enum math_pseudo type = instruction.opcode;
	// op rd, rs1
	switch (type) {
	case MATH_MV: // addi rd, rs, 0
		args.imm = 0;
		return form_itype("mv (addi)",
				  (struct idata){ 4, OP_OPI, 0x0, 0 }, args,
				  position);
	case MATH_NOT: // xori rd, rs, -1
		args.imm = (uint32_t)-1;
		return form_itype("not (xori)",
				  (struct idata){ 4, OP_OPI, 0x4, 0 }, args,
				  position);
	case MATH_NEG: // sub rd, x0, rs
		args.rs2 = args.rs1;
		args.rs1 = 0;
		return form_rtype("neg (sub)",
				  (struct idata){ 4, OP_OP, 0x0, 0x20 }, args,
				  position);
	case MATH_NEGW: // subw rd, x0, rs
		args.rs2 = args.rs1;
		args.rs1 = 0;
		return form_rtype("neg (sub)",
				  (struct idata){ 4, OP_OP32, 0x0, 0x20 }, args,
				  position);
	case MATH_SEXTW: // addiw rd, rs, 0
		args.imm = 0;
		return form_itype("sextw (addiw)",
				  (struct idata){ 4, OP_OPI32, 0x0, 0 }, args,
				  position);
	}
	FULLY_DEFINED_SWITCH();
}

struct bytecode form_setif(const char *name, struct idata instruction,
			   struct args args, size_t position)
{
	logger(DEBUG, no_error, "Generating conditional set intruction %s",
	       name);
	const enum setif_pseudo type = instruction.opcode;
	// op rd, rs1
	switch (type) {
	case SETIF_EQZ: // sltiu rd, rs, 1
		args.imm = 1;
		return form_itype("sltiu (snez)",
				  (struct idata){ 4, OP_OPI, 0x3, 0x00 }, args,
				  position);
	case SETIF_NEZ: // sltu rd, x0, rs
		args.rs2 = args.rs1;
		args.rs1 = 0;
		return form_rtype("sltu (snez)",
				  (struct idata){ 4, OP_OP, 0x3, 0x00 }, args,
				  position);
	case SETIF_LTZ: // slt rd, rs, x0
		args.rs2 = 0;
		return form_rtype("slt (sltz)",
				  (struct idata){ 4, OP_OP, 0x2, 0x00 }, args,
				  position);
	case SETIF_GTZ: // slt rd, x0, rs
		args.rs2 = args.rs1;
		args.rs1 = 0;
		return form_rtype("slt (sgtz)",
				  (struct idata){ 4, OP_OP, 0x2, 0x00 }, args,
				  position);
	}
	FULLY_DEFINED_SWITCH();
}

struct bytecode form_branchifz(const char *name, struct idata instruction,
			       struct args args, size_t position)
{
	logger(DEBUG, no_error, "Generating conditional branch intruction %s",
	       name);
	const enum branchifz_pseudo type = instruction.opcode;
	// op rs1, offset
	switch (type) {
	case BRANCHIFZ_EQZ: // beq rs, x0, offset
		args.rs2 = 0;
		return form_btype("beq (beqz)",
				  (struct idata){ 4, OP_BRANCH, 0x0, 0 }, args,
				  position);
	case BRANCHIFZ_NEZ: // bne rs, x0, offset
		args.rs2 = 0;
		return form_btype("bne (bnez)",
				  (struct idata){ 4, OP_BRANCH, 0x1, 0 }, args,
				  position);
	case BRANCHIFZ_LEZ: // bge x0, rs, offset
		args.rs2 = args.rs1;
		args.rs1 = 0;
		return form_btype("bge (blez)",
				  (struct idata){ 4, OP_BRANCH, 0x5, 0 }, args,
				  position);
	case BRANCHIFZ_GEZ: // bge rs, x0, offset
		args.rs2 = 0;
		return form_btype("bge (blez)",
				  (struct idata){ 4, OP_BRANCH, 0x5, 0 }, args,
				  position);
	case BRANCHIFZ_LTZ: // blt rs, x0, offset
		args.rs2 = 0;
		return form_btype("bge (blez)",
				  (struct idata){ 4, OP_BRANCH, 0x4, 0 }, args,
				  position);
	case BRANCHIFZ_GTZ: // blt x0, rs, offset
		args.rs2 = args.rs1;
		args.rs1 = 0;
		return form_btype("bge (blez)",
				  (struct idata){ 4, OP_BRANCH, 0x4, 0 }, args,
				  position);
	}
	FULLY_DEFINED_SWITCH();
}

struct bytecode form_branchifr(const char *name, struct idata instruction,
			       struct args args, size_t position)
{
	logger(DEBUG, no_error, "Generating conditional branch intruction %s",
	       name);
	const enum branchifr_pseudo type = instruction.opcode;

	const uint8_t rs1 = args.rs1;
	args.rs1 = args.rs2;
	args.rs2 = rs1;

	const uint8_t funct3 = (uint8_t)(type);
	const char *names[] = { "blt (bgt)", "bge (ble)", "bltu (bgtu)",
				"bgeu (bleu)" };
	return form_btype(names[type - BRANCHIFR_GT],
			  (struct idata){ 4, OP_BRANCH, funct3, 0 }, args,
			  position);
}

struct bytecode form_jump(const char *name, struct idata instruction,
			  struct args args, size_t position)
{
	logger(DEBUG, no_error, "Generating unconditional jump intruction %s",
	       name);
	const enum jump_pseudo type = instruction.opcode;
	switch (type) {
	case JUMP_J:
		args.rd = 0;
		return form_jtype("jal (j)", (struct idata){ 4, OP_JAL, 0, 0 },
				  args, position);
	case JUMP_RET:
		args.rs1 = 1;
		// fall through
	case JUMP_JR:
		args.rd = 0;
		args.imm = 0;
		return form_itype("jalr (jr)",
				  (struct idata){ 4, OP_JALR, 0x0, 0 }, args,
				  position);
	}
	FULLY_DEFINED_SWITCH();
}

const struct formation zicsr[] = {
	{ "csrrw", &form_itype, &parse_csr, { 4, OP_SYSTEM, 0x1, 0 } },
	{ "csrrs", &form_itype, &parse_csr, { 4, OP_SYSTEM, 0x2, 0 } },
	{ "csrrc", &form_itype, &parse_csr, { 4, OP_SYSTEM, 0x3, 0 } },
	{ "csrrwi", &form_itype, &parse_csri, { 4, OP_SYSTEM, 0x5, 0 } },
	{ "csrrsi", &form_itype, &parse_csri, { 4, OP_SYSTEM, 0x6, 0 } },
	{ "csrrci", &form_itype, &parse_csri, { 4, OP_SYSTEM, 0x7, 0 } },

	END_FORMATION
};


const struct formation zifencei[] = {
	{ "fence.i", &form_itype, &parse_none, { 4, OP_MISC_MEM, 0x1, 0 } },

	END_FORMATION
};


const struct bytecode error_bytecode = { .size = (size_t)-1, .data = NULL };

int32_t calc_symbol_offset(const struct symbol *sym, size_t position)
{
	const size_t sympos = calc_fileoffset((struct sectionpos){
		.section = sym->section,
		.offset = sym->value,
	});
	return (int32_t)(sympos - position);
}

struct bytecode form_empty_bytecode(void)
{
	logger(DEBUG, no_error, "Generating empty bytecode");
	return (struct bytecode){ .size = 0, .data = NULL };
}

struct bytecode form_rtype(const char *name, struct idata instruction,
			   struct args args, size_t position)
{
	(void)position;
	logger(DEBUG, no_error, "Generating R type instruction %s", name);

	const uint32_t opcode = instruction.opcode;
	const uint32_t rd = args.rd;
	const uint32_t funct3 = instruction.funct3;
	const uint32_t rs1 = args.rs1;
	const uint32_t rs2 = args.rs2;
	const uint32_t funct7 = instruction.funct7;

	assert(instruction.sz == 4);

	struct bytecode res = {
		.size = 4,
		.data = xmalloc(4),
	};
	*(uint32_t *)res.data = opcode | (rd << 7) | (funct3 << 12) |
				(rs1 << 15) | (rs2 << 20) | (funct7 << 25);
	return res;
}

struct bytecode form_itype(const char *name, struct idata instruction,
			   struct args args, size_t position)
{
	(void)position;
	logger(DEBUG, no_error, "Generating I type instruction %s", name);

	const uint32_t opcode = instruction.opcode;
	const uint32_t rd = args.rd;
	const uint32_t funct3 = instruction.funct3;
	const uint32_t rs1 = args.rs1;
	const uint32_t imm_11_0 = args.imm & 0xFFF;

	assert(instruction.sz == 4);

	struct bytecode res = {
		.size = 4,
		.data = xmalloc(4),
	};
	*(uint32_t *)res.data = opcode | (rd << 7) | (funct3 << 12) |
				(rs1 << 15) | (imm_11_0 << 20);
	return res;
}

struct bytecode form_itype2(const char *name, struct idata instruction,
			    struct args args, size_t position)
{
	logger(DEBUG, no_error, "Generating I type 2 instruction %s", name);
	struct bytecode res = form_itype(name, instruction, args, position);
	*(uint32_t *)res.data |= 0x40000000; /* set type 2 bit */
	return res;
}

struct bytecode form_stype(const char *name, struct idata instruction,
			   struct args args, size_t position)
{
	(void)position;
	logger(DEBUG, no_error, "Generating S type instruction %s", name);

	const uint32_t opcode = instruction.opcode;
	const uint32_t imm_4_0 = args.imm & 0x1F;
	const uint32_t funct3 = instruction.funct3;
	const uint32_t rs1 = args.rs1;
	const uint32_t rs2 = args.rs2;
	const uint32_t imm_11_5 = (args.imm >> 5) & 0x7F;

	assert(instruction.sz == 4);

	struct bytecode res = {
		.size = 4,
		.data = xmalloc(4),
	};
	*(uint32_t *)res.data = opcode | (imm_4_0 << 7) | (funct3 << 12) |
				(rs1 << 15) | (rs2 << 20) | (imm_11_5 << 25);
	return res;
}

struct bytecode form_btype(const char *name, struct idata instruction,
			   struct args args, size_t position)
{
	(void)position;
	logger(DEBUG, no_error, "Generating B type instruction %s", name);

	if (args.sym->type != SYMBOL_LABEL)
		logger(ERROR, error_invalid_syntax,
		       "Incorrect argument types for instruction %s."
		       " Expected label, but got a different symbol",
		       args.sym->name);

	const uint32_t offset =
		(uint32_t)calc_symbol_offset(args.sym, position);
	const uint32_t opcode = instruction.opcode;
	const uint32_t imm_11 = (offset >> 11) & 0x1;
	const uint32_t imm_4_1 = (offset >> 1) & 0xF;
	const uint32_t funct3 = instruction.funct3;
	const uint32_t rs1 = args.rs1;
	const uint32_t rs2 = args.rs2;
	const uint32_t imm_10_5 = (offset >> 5) & 0x3F;
	const uint32_t imm_12 = (offset >> 12) & 0x1;

	logger(DEBUG, no_error, "B type instruction has offset of 0x%.04X",
	       offset);

	assert(instruction.sz == 4);

	struct bytecode res = {
		.size = 4,
		.data = xmalloc(4),
	};
	*(uint32_t *)res.data = opcode | (imm_11 << 7) | (imm_4_1 << 8) |
				(funct3 << 12) | (rs1 << 15) | (rs2 << 20) |
				(imm_10_5 << 25) | (imm_12 << 31);
	return res;
}

struct bytecode form_utype(const char *name, struct idata instruction,
			   struct args args, size_t position)
{
	(void)position;
	logger(DEBUG, no_error, "Generating U type instruction %s", name);

	const uint32_t opcode = instruction.opcode;
	const uint32_t rd = args.rd & 0x1F;
	const uint32_t imm_12_31 = (args.imm >> 12) & 0xFFFFF;

	assert(instruction.sz == 4);

	struct bytecode res = {
		.size = 4,
		.data = xmalloc(4),
	};
	*(uint32_t *)res.data = opcode | (rd << 7) | (imm_12_31 << 12);
	return res;
}

struct bytecode form_jtype(const char *name, struct idata instruction,
			   struct args args, size_t position)
{
	(void)position;
	logger(DEBUG, no_error, "Generating J type instruction %s", name);

	int32_t offset = calc_symbol_offset(args.sym, position);
	logger(DEBUG, no_error, "Offset of J type instruction is 0x%x", offset);

	const uint32_t opcode = instruction.opcode;
	const uint32_t rd = args.rd & 0x1F;
	const uint32_t imm_19_12 = (offset >> 12) & 0xFF;
	const uint32_t imm_11 = (offset >> 11) & 0x1;
	const uint32_t imm_10_1 = (offset >> 1) & 0x3FF;
	const uint32_t imm_20 = (offset >> 20) & 0x1;

	assert(instruction.sz == 4);

	struct bytecode res = {
		.size = 4,
		.data = xmalloc(4),
	};
	*(uint32_t *)res.data = opcode | (rd << 7) | (imm_19_12 << 12) |
				(imm_11 << 20) | (imm_10_1 << 21) |
				(imm_20 << 31);
	return res;
}


struct formation parse_form(const char *instruction)
{
	logger(DEBUG, no_error, "Getting formation for instruction %s",
	       instruction);

	const struct formation *sets[] = {
		rv32i, rv64i, rv32a, rv64a, zicsr, zifencei,
	};
	for (size_t i = 0; i < ARRAY_LENGTH(sets); i++) {
		while (sets[i]->name) {
			if (!strcmp(instruction, sets[i]->name))
				return *sets[i];
			sets[i]++;
		}
	}

	logger(ERROR, error_invalid_instruction,
	       "Unknown assembly instruction - %s\n", instruction);
	return (struct formation)END_FORMATION;
}


#define ELF_IDENT                                                         \
	0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, \
		0x00, 0x00, 0x00, 0x00, 0x00

struct elf64header new_elf64header(void)
{
	return (struct elf64header){
		.ident = { ELF_IDENT },
		.type = 0x01, /* Relocatable file */
		.machine = 0xF3, /* RISC-V */
		.version = 1, /* ELF version 1 */
		.flags = 0x0004, /* RISC-V float abi double flag */
		.headersize = sizeof(struct elf64header),
	};
}

struct elf64sectionheader new_elf64sectionheader(void)
{
	return (struct elf64sectionheader){
		.size = sizeof(struct elf64sectionheader),
		.addr = 0x0,
	};
}


enum sectiontypes_e {
	SHT_NULL = 0x0,
	SHT_PROGBITS = 0x1,
	SHT_SYMTAB = 0x2,
	SHT_STRTAB = 0x3,
};

enum sections outputsection = SECTION_TEXT;
static struct section outputsections[SECTION_COUNT] = { { .size = 0,
							  .contents = NULL } };

static struct {
	uint64_t flags;
	uint32_t link;
	uint32_t info;
	uint64_t align;
	uint64_t entrysize;
	uint32_t type;
} sectiondata[SECTION_COUNT] = {
	{ 0x00, 0x0, 0x0, 0x1, 0x0, SHT_NULL },
	{ 0x00, 0x0, 0x0, 0x1, 0x0, SHT_STRTAB }, // .strtab
	{ 0x06, 0x0, 0x0, 0x4, 0x0, SHT_PROGBITS }, // .text
	{ 0x03, 0x0, 0x0, 0x1, 0x0, SHT_PROGBITS }, // .data
	{ 0x00, 0x1, 0x0, 0x8, 0x18, SHT_SYMTAB }, // .symtab
};

static const char *sectionnames[SECTION_COUNT] = {
	"", ".strtab", ".text", ".data", ".symtab",
};

void change_output(enum sections section)
{
	if (section >= SECTION_COUNT || section < 0)
		return;
	outputsection = section;
}

struct sectionpos get_outputpos(void)
{
	return (struct sectionpos){
		.section = outputsection,
		.offset = outputsections[outputsection].size
	};
}

void inc_outputsize(enum sections section, size_t amount)
{
	outputsections[section].size += amount;
}

void set_section(enum sections section)
{
	outputsection = section;
}

size_t calc_fileoffset(struct sectionpos a)
{
	return outputsections[a.section].offset + a.offset;
}

static inline size_t align_offset(size_t offset, size_t align)
{
	offset--;
	offset /= align;
	offset++;
	offset *= align;
	return offset;
}

void calc_strtab(void)
{
	outputsections[SECTION_STRTAB].size = 0;
	for (int i = 0; i < SECTION_COUNT; i++)
		outputsections[SECTION_STRTAB].size +=
			strlen(sectionnames[i]) + 1;
	outputsections[SECTION_STRTAB].size += calc_symtab_str_buf_size();
}

int fill_strtab(void)
{
	const size_t symtab_strings_sz = calc_symtab_str_buf_size();
	char *symtab_strings = create_symtab_str_buf(symtab_strings_sz);
	const size_t count =
		write_sectiondata(symtab_strings, symtab_strings_sz,
				  (struct sectionpos){
					  .section = SECTION_STRTAB,
					  .offset = 0,
				  });
	free(symtab_strings);
	if (count != symtab_strings_sz) {
		logger(ERROR, error_internal,
		       "Unable to write data to memory for section .strtab");
		return 1;
	}
	size_t offset = count;
	for (int i = 0; i < SECTION_COUNT; i++) {
		const size_t sz = strlen(sectionnames[i]) + 1;
		const size_t written =
			write_sectiondata(sectionnames[i], sz,
					  (struct sectionpos){
						  .section = SECTION_STRTAB,
						  .offset = offset,
					  });
		if (sz != written) {
			logger(ERROR, error_internal,
			       "Unable to write data to memory for section .strtab");
			return 1;
		}
		outputsections[i].nameoffset = (uint32_t)offset;
		offset += sz;
	}
	return 0;
}

void calc_symtab(void)
{
	size_t sz = 0;
	for (size_t hash = 0; hash < SYMBOLMAP_ENTRIES; hash++)
		sz += symbols[hash].count;
	outputsections[SECTION_SYMTAB].size =
		(sz + 1) * sizeof(struct elf64sym);
	sectiondata[SECTION_SYMTAB].info = (uint32_t)sz;
}

int fill_symtab(void)
{
	const struct elf64sym blank = (struct elf64sym){ 0, 0, 0, 0, 0, 0 };
	write_sectiondata(&blank, sizeof(blank),
			  (struct sectionpos){ .section = SECTION_SYMTAB,
					       .offset = 0 });
	uint32_t strtab_addr = 1;
	size_t count = 1;
	for (size_t hash = 0; hash < SYMBOLMAP_ENTRIES; hash++) {
		for (size_t index = 0; index < symbols[hash].count; index++) {
			const struct symbol *sym = &symbols[hash].data[index];
			struct elf64sym entry = (struct elf64sym){
				.name = strtab_addr,
				.info = sym->binding,
				.other = 0, /* TODO: add other attributes */
				.shndx = (uint16_t)sym->section,
				.value = (uint64_t)sym->value,
				.size = 0, /* TODO: support for symbol sizes? */
			};
			write_sectiondata(
				&entry, sizeof(entry),
				(struct sectionpos){ .section = SECTION_SYMTAB,
						     .offset = count *
							       sizeof(entry) });
			strtab_addr += (uint32_t)sym->name_sz;
			count++;
		}
	}
	return 0;
}

int alloc_output(void)
{
	size_t offset = sizeof(struct elf64header);
	for (int i = 0; i < SECTION_COUNT; i++) {
		outputsections[i].contents = xmalloc(outputsections[i].size);
		logger(DEBUG, no_error, "%d bytes allocated to section (%p)",
		       outputsections[i].size, outputsections[i].contents);
		offset = align_offset(offset, sectiondata[i].align);
		outputsections[i].offset = offset;
		offset += outputsections[i].size;
	}
	outputsections[SECTION_NULL].offset = 0x0;
	return 0;
}

size_t write_sectiondata(const void *bytes, size_t count,
			 struct sectionpos position)
{
	logger(DEBUG, no_error, "writing %d bytes to section %s",
	       position.section, sectionnames[position.section]);
	if (position.offset + count > outputsections[position.section].size) {
		logger(CRITICAL, error_internal,
		       "Too many bytes for allowed size (requested end: %d, allocated: %d)",
		       position.offset + count,
		       outputsections[position.section].size);
		return 0;
	}
	char *dest =
		outputsections[position.section].contents + position.offset;
	memcpy(dest, bytes, count);
	return count;
}

int flush_output(FILE *elf)
{
	logger(DEBUG, no_error, "Writing ELF output to temporary file");
	/* Generate headers */
	struct elf64header elfheader = new_elf64header();
	elfheader.phoffset = 0;
	elfheader.phentrysize = 0;
	elfheader.phcount = 0;

	elfheader.shcount = SECTION_COUNT;
	elfheader.shentrysize = sizeof(struct elf64sectionheader);
	elfheader.shstrindex = SECTION_STRTAB;

	struct elf64sectionheader sectionheaders[SECTION_COUNT];
	for (int i = 0; i < SECTION_COUNT; i++) {
		sectionheaders[i] = new_elf64sectionheader();
		sectionheaders[i].flags = sectiondata[i].flags;
		sectionheaders[i].link = sectiondata[i].link;
		sectionheaders[i].info = sectiondata[i].info;
		sectionheaders[i].addralign = sectiondata[i].align;
		sectionheaders[i].entrysize = sectiondata[i].entrysize;
		sectionheaders[i].type = sectiondata[i].type;
		sectionheaders[i].name = outputsections[i].nameoffset;
		sectionheaders[i].offset = outputsections[i].offset;
		sectionheaders[i].size = outputsections[i].size;
		logger(DEBUG, no_error,
		       "Creating section (%s) of size (0x%.08x) and offset (0x%.08x)",
		       sectionnames[i], sectionheaders[i].size,
		       sectionheaders[i].offset);
	}

	/* Fix offset and alignment stuff */
	sectionheaders[SECTION_NULL].addralign = 0x0;
	elfheader.shoffset =
		align_offset(outputsections[SECTION_COUNT - 1].offset +
				     outputsections[SECTION_COUNT - 1].size,
			     8);

	logger(DEBUG, no_error, "Section Header offset at 0x%.08x",
	       elfheader.shoffset);

	/* Write data to output */
	logger(DEBUG, no_error, "Writing ELF header");
	fwrite(&elfheader, sizeof(elfheader), 1, elf);
	for (int i = 0; i < SECTION_COUNT; i++) {
		logger(DEBUG, no_error, "Writing Section (%s)",
		       sectionnames[i]);
		fseek(elf, (long)outputsections[i].offset, SEEK_SET);
		fwrite(outputsections[i].contents, 1, outputsections[i].size,
		       elf);
	}
	logger(DEBUG, no_error, "Writing section headers");
	fseek(elf, (long)elfheader.shoffset, SEEK_SET);
	fwrite(sectionheaders, sizeof(sectionheaders), 1, elf);

	return 0;
}

void free_output(void)
{
	for (int i = 0; i < SECTION_COUNT; i++)
		free(outputsections[i].contents);
}

#define __STDC_WANT_LIB_EXT1__ 1


FILE *inputfile = NULL;
FILE *outputtempfile = NULL;
FILE *outputfile = NULL;

static int fopen2(FILE **f, const char *filename, const char *flags)
{
#ifdef __STDC_LIB_EXT1__
	return fopen_s(f, filename, flags));
#else
	*f = fopen(filename, flags);
	return !*f;
#endif
}

void closefiles(void)
{
	if (inputfile)
		fclose(inputfile);
	if (outputtempfile)
		fclose(outputtempfile);
	if (outputfile && outputfile != stdin && outputfile != stdout &&
	    outputfile != stderr)
		fclose(outputfile);
}

void open_files(void)
{
	logger(DEBUG, no_error, "Opening files");

	outputtempfile = tmpfile();
	if (!outputtempfile) {
		logger(ERROR, error_system, "Unable to create temporary file");
		exit(1);
	}

	logger(DEBUG, no_error, "Opening %s", *cmdargs.inputfile->filename);
	if (fopen2(&inputfile, *cmdargs.inputfile->filename, "r")) {
		puts("Error: ");
		logger(ERROR, error_system, "Unable to open input file");
		exit(1);
	}

	if (!**cmdargs.outputfile->filename) {
		logger(DEBUG, no_error, "All files opened successfully");
		outputfile = stdout;
		return;
	}

	logger(DEBUG, no_error, "Opening %s", *cmdargs.outputfile->filename);
	if (fopen2(&outputfile, *cmdargs.outputfile->filename, "wb")) {
		puts("Error: ");
		logger(ERROR, error_system, "Unable to open output file");
		exit(1);
	}

	logger(DEBUG, no_error, "All files opened successfully");
}

#define BUFSIZ 1024

void copy_files(FILE *dest, FILE *src)
{
	const long pos = ftell(src);
	rewind(outputtempfile);

	char *buffer = xmalloc(BUFSIZ);
	for (;;) {
		const size_t bytes = fread(buffer, 1, BUFSIZ, src);
		fwrite(buffer, 1, bytes, dest);
		if (bytes != BUFSIZ)
			break;
	}
	free(buffer);

	fseek(src, pos, SEEK_SET);
}

int main(int argc, char *argv[])
{
	parse_cmdargs(argc, argv);
	open_files();
	parse_file(inputfile, outputtempfile);

	logger(DEBUG, no_error, "Done generating bytecode");
	copy_files(outputfile, outputtempfile);
	logger(DEBUG, no_error, "Finished writing bytecode to output");
	closefiles();

	return get_clean_exit(ERROR);
}
