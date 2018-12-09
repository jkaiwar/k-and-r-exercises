#include <stdio.h>
#define MAXLINE 1000		/* maximum line length */

void reverse(char in[], int len);
int getlinx(char line[], int maxline);

int main(void)
{
    char line[MAXLINE];

    int c;
    
    while ((c = getlinx(line, MAXLINE)) > 0) {
      reverse(line, c);
      printf("%s", line);
    }
}

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

void reverse(char string[], int length)
{
  char out[length+1];
  int j = 0;
  int i;
  
  for (i = (length - 1); i >= 0 ; --i) {
    out[j] = string[i];
    ++j;
  }

  out[j] = '\0';

  for (i = 0; i != length; ++i)
    {   string[i] = out[i];}
}
