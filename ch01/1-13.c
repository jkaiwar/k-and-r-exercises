#include <stdio.h>

/* this program should hopefully print a vertical */
/* histogram measuring frequency of a word length. */
int main(void)
{
    int c, i, nletter, max;
    int nfrequency[10];

    nletter = 0;
    for (i = 0; i < 10; ++i)
	nfrequency[i] = 0;

    while ((c = getchar()) != EOF)
	if (c != ' ' && c != '\n' && c != '\t')
	    ++nletter;
	else if (nletter != 0) {
	    ++nfrequency[nletter - 1];
	    nletter = 0;
	}

    max = 0;
    for (i = 0; i < 10; ++i)
	if (nfrequency[i] > max)
	    max = nfrequency[i];

    for (i = 0; i < 10; ++i)
	nfrequency[i] = (max - nfrequency[i]);

    printf("\n");
    while (max != 0) {
	for (i = 0; i < 10; ++i)
	    if (nfrequency[i] == 0)
		printf("#");
	    else {
		printf(" ");
		nfrequency[i] = --nfrequency[i];
	    }
	printf("\n");
	--max;
    }
}
