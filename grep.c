#include "minux.h"
#include "comelang.h"

int main(int argc, char** argv) {
puts("GREP 1\r\n");
    char* search = null;
    for(int i=1; i<argc; i++) {
        search = argv[i];
    }
    
puts("GREP 2\r\n");
    if(search == null) {
        puts("grep: serach word panic\r\n");
        exit(2);
    }
puts("GREP 3\r\n");
    
    buffer*% input = new buffer();
    while(1) {
puts("GREP 4\r\n");
        char buf[256+1];
        
        int size = read(0, buf, 256);
puts("GREP 5\r\n");
        
        if(size < 0) {
            puts("grep: read panic\r\n");
            exit(1);
        }
        
        if(size < 256) {
            input.append(buf, size);
            break;
        }
        else {
            input.append(buf, 256);
        }
puts("GREP 6\r\n");
    }
    
puts("GREP 7\r\n");
    input.to_string().split_char('\n').each {
puts("GREP 8\r\n");
        if(strstr(it, search)) {
            puts(it);
            puts("\r\n");
        }
puts("GREP 9\r\n");
    }
    
    puts("\r\n");
    
    exit(1);
}

