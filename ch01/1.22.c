#include <stdio.h>

/* fold will take a break lines into lines no more than n characters long. It will attempt to break at spaces or tabs. */

#define LINELENGTH 20        /* Maximum length of line */


char line[LINELENGTH];

int emstr(int start, int finish);



int main(void)
{
     int c, i, r;
     extern char line[];

     i = r = 0;
	  while ((c = getchar()) != EOF) {
	       if (c == '\n') {
		    emstr(0, (i - 1));
		    putchar(c);
		    i = r = 0;
	       } else if (i == LINELENGTH)
		    if (r == 0) {
			 emstr(0, (i - 1));
			 putchar ('\n');
			 putchar (c);
			 line[0] = c;
			 i = 0;
			 r = 0;
		    } else {
			 emstr(0, r);
			 putchar('\n');
			 for (i = 1; i <= LINELENGTH; ++i)
			      line[(i - 1)] = line[(r + i)];
			 i = ((LINELENGTH - r) + 1);
			 r = 0;
			 /* if this was a space we'd have a bug */
			 line[i] = c;
			 ++i;
		    }
	       else if (c == ' ' || c == '\t') {
		    r = i;
		    line[i] = c;
		    ++i;
	       } else {
		    line[i] = c;
		    ++i;
	       }
	  }
     return 0;
}

int emstr(int a, int b)
{
     extern char line[];
     int count;
     
     for(count = a; count <= b; ++count)
	  putchar(line[count]);
     return 0;
}
