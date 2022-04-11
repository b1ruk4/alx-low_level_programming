#include <stdio.h>


/**
 * main - entry point.
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * return 0.
 */

int main(void)
{
int c;

for (int c = 0; c < 26; ++c)
putchar('a' + c);

return (0);
}
