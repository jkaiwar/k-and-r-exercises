#include <stdio.h>

/* copy input to output replacing
each string of blanks with a single blank */

int main(void)
{
  int c;
  
  while((c = getchar()) != EOF) {
    putchar(c);
    if(c == ' ') {
      while((c = getchar()) == ' ');
	putchar(c);
    }
  }
}
    
	
