#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 *@size: size of the array
 *@c: char to initialize the array wtih
 *
 *Return: pointer to the address of the array
 **/
char *create_array(unsigned int size, char c)
{
	char *task;

	if (size == 0)
		return (NULL);
	task = malloc(sizeof(char) * size);
	if (task != NULL)
	{
		while (size--)
			task[size] = c;
	}
	else
		return (NULL);
	return (task);
}
