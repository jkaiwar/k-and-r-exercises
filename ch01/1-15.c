#include <stdio.h>

/* print Fahrenheit-Celsius table */

float celsius(int n);

int main(void)
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	printf("%3d %6.1f\n", fahr, celsius(fahr));
}

float celsius(int n)
{
    float p;

    p = (5.0 / 9.0) * (n - 32);

    return p;
}
