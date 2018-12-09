#include <stdio.h>

/* find the value of the end of file (EOF) */

int main(void)
{
  int c;

  c = (getchar() != EOF);
    
  printf("%d\n", c);
}
 
