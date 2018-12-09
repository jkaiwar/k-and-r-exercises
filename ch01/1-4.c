#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit */
  step = 20;      /* step size */
  
  celsius = lower;

  printf("This is a Celsius to Fahrenheit Table:\n");
  
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%3.0f\t%3.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
