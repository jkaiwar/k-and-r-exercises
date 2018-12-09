#include <stdio.h>

#define IN 1			/* if inside the word */
#define OUT 0			/* if outside the word */


int main(void)
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
	if (c == ' ' || c == '\n' || c == '\t') {
	    putchar('\n');
	    state = OUT;
	} else {
	    putchar(c);
	    if (state == OUT)
		state = IN;
	}
    }
}
