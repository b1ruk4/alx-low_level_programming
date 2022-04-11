#include <stdio.h>


/**
 * main - main block.
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * return 0.
 */

int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);

return (0);
}
