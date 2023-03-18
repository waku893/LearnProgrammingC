#include <stdio.h>

int main() {
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
    if (c== '\t')
      ++nl;
  printf("%d\n", nl);
}
