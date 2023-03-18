#include <stdio.h>

int main() {
  int c,pre;

  while ((c = getchar()) != EOF) {
    if (!(c == ' ' && pre == ' '))
      putchar(c);
    pre = c;
  }
}
