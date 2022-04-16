#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The char to be checked.
 *
 * Return: 1 if char is latter, lowercase or uppercase, 0 otherwise.
 */
int -isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
