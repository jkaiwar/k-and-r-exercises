#include <stdio.h>

int main(void)
{
    int tabcount, spacecount, newlinecount;
    int c;

    tabcount = spacecount = newlinecount = 0;
    while ((c = getchar()) != EOF) {
	if (c == '\n')
	    ++newlinecount;

	if (c == '\t')
	    ++tabcount;

	if (c ==' ')
	    ++spacecount;
    }
    printf("lines %d\tspaces %d\ttabs %d\n", newlinecount, spacecount, tabcount);
}
