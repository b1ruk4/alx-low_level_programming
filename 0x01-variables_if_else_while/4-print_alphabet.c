#include <stdio.h>
/**
 * main - main block.
 *
 * Return: always 0
 */
int main(void)
{
int c;

    for (c = 0; c < 26; ++c)
{
        if (c != 'q' && c != 'e')
            putchar('a' + c);
}
putchar(10);
return (0);
}
