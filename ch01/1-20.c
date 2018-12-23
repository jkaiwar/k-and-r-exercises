#include <stdio.h>

/* Detab: This program replaces tabs in the input with the correct number of
   spaces till the next tab stop. External variable TABSTOP defines its length. */

#define TABSTOP	8		/* size of tabstop */

int remcom(int dividend, int divisor);
int main(void)
{
    int i, c, k;

    i = 0;
    while ((c = getchar()) != EOF) {
	if (c == '\n') {
	    i = 0;
	    putchar(c);
	} else if (c == '\t') {
	    k = remcom(i, TABSTOP);
	    i = (i + k);
	    for (; k > 0; --k)
		putchar(' ');
	} else {
	    ++i;
	    putchar(c);
	}
    }
}



/* remainder complement returns the difference between */
/* the divisor and remainder given divisor and dividend */

int remcom(int did, int dis)
{
    int i;

    i = (dis - (did % dis));
    return i;
}
