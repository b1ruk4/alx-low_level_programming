#include "function_pointers.h"

/**
 * print_name-  taks a char paremater and prints the name
 * @name: name of the person
 * @f: porinter to void function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
