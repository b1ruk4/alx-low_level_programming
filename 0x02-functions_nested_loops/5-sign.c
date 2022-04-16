#include "main.h"
/**
 * print_sign - Checks if a character is alphabetic.
 * @n: The char to be checked.
 *
 * Return: 1 if char is  greaterthan zero and print +
 * return 0 and print 0 if it is equal to zero
 * rerutn -1 if n is equal to less than zero and print -.
 */
int print_sign(int n)
{
if (n > '0')
{
_putchar('+');
return (1);
}
else if (n ==0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

