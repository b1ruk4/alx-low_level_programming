#include "main.h"
/**
 * _islower - checkes wheather it's lowercase or not.
 * @c: is the char reprsenting the parameter.
 * Return: if lowercase return 1 else return 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
