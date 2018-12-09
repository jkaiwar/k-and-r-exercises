#include <stdio.h>
#define MAXLINE 1000		/* maximum input line size */
#define ARBITRARYLENGTH 12	/* arbitrary length of lines to print */

int getlinx(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void)
{
    int len;			/* current line length */
    int max;			/* maximum length seen so far */
    char line[MAXLINE];		/* current input line */
    char longest[MAXLINE];	/* longest line saved here */

    max = 0;
    while ((len = getlinx(line, MAXLINE)) > 0) {
	if (len == ARBITRARYLENGTH)
	    printf("[length = %d] %s", len, line);
    }
    return 0;
}

/* getlinx: read a line into s, return length */
int getlinx(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	s[i] = c;
    if (c == '\n') {
	s[i] = c;
	++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '0')
	++i;
}
