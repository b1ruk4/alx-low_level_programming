#include "main.h"
/**
 * main - checks the code
 * prints 10 times the alphabet, in lowercase, followed by a new line.
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; ++i)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
