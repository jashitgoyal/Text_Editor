// Headers
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <ctype.h>
#include <errno.h>

// Definitions

#define CTRL_KEY(k) ((k) & 0x1f)


// Data
struct termios orig_termios;

// Error Handler
void die(const char *s) {
  write(STDOUT_FILENO, "\x1b[2J", 4);
  write(STDOUT_FILENO, "\x1b[H", 3);
  perror(s);
  exit(1);
}

// Terminal Functions

void disableRawMode() {
  if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios) == -1)
    die("tcsetattr");
}

void enableRawMode() {
 if (tcgetattr(STDIN_FILENO, &orig_termios) == -1) die("tcgetattr");
  atexit(disableRawMode);
  struct termios raw = orig_termios;
// Command Line or Terminal Input Output Flags
  raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
  raw.c_oflag &= ~(OPOST);
  raw.c_cflag |= (CS8);
  raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
  raw.c_cc[VMIN] = 0;
  raw.c_cc[VTIME] = 1;

  if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw) == -1) die("tcsetattr");
};


char editorReadKey() {
  int nread;
  char c;
  while ((nread = read(STDIN_FILENO, &c, 1)) != 1) {
    if (nread == -1 && errno != EAGAIN) die("read");
  }
  return c;

}
// Output
void editorDrawRows() {
  int i;
  for (i = 0; i < 24; i++) {
    write(STDOUT_FILENO, "|\r\n", 3);
  }
}

// Cleaning Stuff
void editorRefreshScreen() {
  write(STDOUT_FILENO, "\x1b[2J", 4);
  write(STDOUT_FILENO, "\x1b[H", 3);
    editorDrawRows();
  write(STDOUT_FILENO, "\x1b[H", 3);

}

/*** input ***/
void editorProcessKeypress() {
  char c = editorReadKey();
  switch (c) {
    case CTRL_KEY('z'):
      write(STDOUT_FILENO, "\x1b[2J", 4);
      write(STDOUT_FILENO, "\x1b[H", 3);
      printf("BBye");
      exit(0);
      break;
  }
}

// Init
int main(){

 enableRawMode();

  while (1) {
    editorRefreshScreen();
    editorProcessKeypress();
  }
  return 0;
}

