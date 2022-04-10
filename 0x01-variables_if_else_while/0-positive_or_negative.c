#include <stdlib.h>
#include <time.h>
#include  <stdio.h>


/**
 * main - Prints arandum number and states wheather
 *         it is positive, negative, or zero.
 *
 *return: Always 0.
 */
int main(void) //return type
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else

printf("%d is zero\n", n);

return (0);
}
