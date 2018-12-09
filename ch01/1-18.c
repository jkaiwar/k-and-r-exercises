#include <stdio.h>
#define MAXLINE 1000		/* defining maximum line length to declare our array */

void append(char to[], char from[], int topointer, int frompointer,
	    int limit);

/* remove blanks from file */
int main(void)
{
    char line[MAXLINE];
    char auxline[MAXLINE];

    int lpointer;
    int bpointer;

    int c;
    int i;
    
    lpointer = bpointer = 0;
    while ((c = getchar()) != EOF) {
	if (c == '\n') {
	  for (i = 0; i < lpointer; ++i)
	    putchar(line[i]);
	    putchar('\n');
	    lpointer = 0;
	    bpointer = 0;
	} else if (c == ' ' || c == '\t') {
	    auxline[bpointer] = c;
	    ++bpointer;
	} else if (bpointer == 0) {
	    line[lpointer] = c;
	    ++lpointer;
	} else {
	  while (bpointer > 0) {
	    if (lpointer <= MAXLINE) {
	      line[lpointer] = auxline[(bpointer - 1)];
	      ++lpointer;
	      --bpointer;
	    } else
	      bpointer = 0;
	  }
	  
	    line[lpointer] = c;
	    ++lpointer;
	}
    }
    return 0;
}

/* On hindsight this could have been implemented without the "line"
array. We could have putchar c if bpointer was zero else putchar the
blank array and then c. The newline case would simply putchar the
newline and reset the bpointer to zero */
