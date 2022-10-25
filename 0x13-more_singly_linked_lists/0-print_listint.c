#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	const listint_t *cursor = h;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		node++;
		cursor = cursor->next;
	}
	return (node);
}
