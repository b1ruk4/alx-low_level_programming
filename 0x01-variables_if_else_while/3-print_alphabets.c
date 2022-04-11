#include <stdio.h>
/**
 * main - main block.
 * Description: prints alphabet in lowercas,in uppercase followed by aline.
 * Return: always 0
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)

putchar('a' + c);


for (c = 65; c <= 90; c++)
putchar(c);
putchar(10);
return (0);
}
