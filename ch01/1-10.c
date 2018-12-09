#include <stdio.h>

/* copy input to output */
int main(void)
{
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    if (c == '\b')
      printf("\\b");
    if (c == ('\\'))
      printf("\\");
    putchar(c);
  }
}
