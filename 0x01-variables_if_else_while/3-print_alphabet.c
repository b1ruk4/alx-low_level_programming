#include <stdio.h>
/**
 * main - main block.
 *
 * Description: prints the alphabet in lowercase and then in uppercase followed by a new line.
 * Return: always 0
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)

putchar('a' + c);
putchar(10);

for (c = 65; c <= 90; c++)
putchar(c);
putchar(10);
return (0);
}
