#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*initioating var*/
	char d;
	int a;
	long int b;
	long long int c;
	float f;


	printf("Size of a char: %d  byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %a byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %b byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %c byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %f byte(s)", (unsigned long)sizeof(f));
	return (0);
}
