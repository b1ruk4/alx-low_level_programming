#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning
 * 		of a listint_t list.
 * @head: A pointer to the address of the
 * 		head of the listint_t list.
 * Return: If the function fails - NULL.
 * 		if else address of new element.
 */

listsint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
