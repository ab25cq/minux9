void putchar(char c);

// 盤の状態
int board[8][8];

// 利きの状態
// 0 ならクイーンを置いてよい
int check[8][8];

int _check_board_by(int x, int y, int mark, int inc) {
  board[y][x] = mark;

  for (int _x = 0; _x < 8; _x++) {
    check[y][_x] = check[y][_x] + inc;
  }

  for (int _y = 0; _y < 8; _y++) {
    check[_y][x] = check[_y][x] + inc;
  }

  for (int _x = 0; _x < 8; _x++) {
    for (int _y = 0; _y < 8; _y++) {
      if (x + y == _x + _y) {
        check[_y][_x] = check[_y][_x] + inc;
      }
      if (x - y == _x - _y) {
        check[_y][_x] = check[_y][_x] + inc;
      }
    }
  }
}

int check_board(int x, int y) {
  _check_board_by(x, y, 1, 1);
}
int uncheck_board(int x, int y) {
  _check_board_by(x, y, 0, -1);
}

int print_board() {
  for (int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      if (board[y][x] == 1) {
        putchar(81 /* 'Q' */);
      } else {
        putchar(46 /* '.' */);
      }
    }
    putchar(10 /* \n */);
  }
}

int print_check() {
  for (int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      putchar(48 + check[y][x]);
    }
    putchar(10);
  }
}

int solve(int x) {
  if (x == 8) {
    print_board();
    putchar(10);
    return 0;
  }

  for (int y = 0; y < 8; y++) {
    if (check[y][x] == 0) {
      check_board(x, y);
      solve(x + 1);
      uncheck_board(x, y);
    }
  }
}

int main() {
  solve(0);
}
