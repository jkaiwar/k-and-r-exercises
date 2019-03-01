#include <stdio.h>

/* entab will replace strings of blanks by the minimum */
/* number of tabs and blanks to achieve the same spacing */

#define TABSTOP 8		/* Size of tabstop */


/* This program could be improved by dropping the */
/* "columns" variable (which is not illustrative) */
/* in favour of dist-to-tabstop. It will also be */
/*  hence necessary to define a function that would */
/*  appropriately "increment" dist-to-tabstop when needed. */


int main(void)
{
    int c, spaces, columns;

    spaces = columns = 0;
    while ((c = getchar()) != EOF) {
	if (c == '\n') {
	    spaces = 0;
	    columns = 0;
	    putchar(c);
	} else if (c == ' ') {
	    ++spaces;
	    /* After every space character input, the program outputs a tab if */
	    /* the spaces variable is equal to the distance to the next tabstop */
	    if (spaces == (TABSTOP - (columns % TABSTOP))) {	
		putchar('\t');
		columns = spaces + columns;
		spaces = 0;
	    }
	} else {
	  /* If another character is input before spaces reaches the next */
	  /* tabstop, the required number of spaces are output and */
	  /* the columns variable is accordingly incremented. */
	    for (; spaces != 0; --spaces) {
		putchar(' ');
		++columns;
	    }
	    putchar(c);
	    ++columns;
	}
    }
    return 0;
}

