#include "main.h"
/**
 * islower - checkes wheather it's lowercase or not.
 *
 * Return: if lowercase return 1 else return 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
