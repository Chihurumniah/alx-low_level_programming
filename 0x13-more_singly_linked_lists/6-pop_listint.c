#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node, *current;
	int n;

	if (*head == NULL)
		return (0);
	next_node = (*head)->next;
	current = *head;
	n = current->n;
	free(current);
	*head = next_node;
	return (n);
}
