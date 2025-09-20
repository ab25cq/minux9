int printf(char *fmt, ...);
void usleep(int u);

int count_nbr(int **grid, int i, int j, int size);

int main() {
  int neighbour_count[20][20];
  int grid[20][20];
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      if (i == 7 && 5 <= j && j <= 16) {
        grid[i][j] = 1;
      } else {
        grid[i][j] = 0;
      }
    }
  }

  int i; int j; int steps;

  for (steps = 0; steps < 50; ++steps) {
    printf("\e[0;0H");
    for (i = 0; i < 20; ++i) {
      printf("\n");
      for (j = 0; j < 20; ++j) {
        if (grid[i][j] == 1)
          printf("\e[42m  \e[m");
        else
          printf("\e[47m  \e[m");
        neighbour_count[i][j] = count_nbr(grid, i, j, 20);
      }
    }

    for (i = 0; i < 20; ++i) {
      for (j = 0; j < 20; ++j) {
        if (grid[i][j] >= 1) {
          if (neighbour_count[i][j] <= 1 || neighbour_count[i][j] >= 4)
            grid[i][j] = 0;
        } else if (neighbour_count[i][j] == 3)
          grid[i][j] = 1;
      }
    }

    usleep(100000);
  }

  return 0;
}

int count_nbr(int **grid, int i, int j, int size) {
  int n_count = 0;
  if (i - 1 >= 0 && j - 1 >= 0) {
    if (grid[i - 1][j - 1] >= 1)
      n_count++;
  }

  if (i - 1 >= 0) {
    if (grid[i - 1][j] >= 1)
      n_count++;
  }

  if (i - 1 >= 0 && j + 1 < size) {
    if (grid[i - 1][j + 1] >= 1)
      n_count++;
  }

  if (j - 1 >= 0) {
    if (grid[i][j - 1] >= 1)
      n_count++;
  }

  if (j + 1 < size) {
    if (grid[i][j + 1] >= 1)
      n_count++;
  }

  if (i + 1 < size && j - 1 >= 0) {
    if (grid[i + 1][j - 1] >= 1)
      n_count++;
  }

  if (i + 1 < size) {
    if (grid[i + 1][j] >= 1)
      n_count++;
  }

  if (i + 1 < size && j + 1 < size) {
    if (grid[i + 1][j + 1] >= 1)
      n_count++;
  }

  return n_count;
}
