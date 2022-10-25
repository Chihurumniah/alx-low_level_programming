#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;
	const listint_t *cursor = h;

	while (cursor)
	{
		node++;
		cursor = cursor->next;
	}
	return (node);
}
