#include <stdio.h>

#define IN  1 /* ñ����� */
#define OUT 0 /* ñ��γ� */

int main() {
  int c, pre, state;

  pre = -1;
  state = OUT;
  while ((c = getchar()) != EOF) {
    if (pre != ' ' && (c == ' ' || c == '\n' || c == '\t')) {
      state = OUT;
      putchar('\n');
    } else if (pre != ' ' || (pre == ' ' && c != ' ')) {
      state = IN;
      putchar(c);
    }
    pre = c;
  }
}
