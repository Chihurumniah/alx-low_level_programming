#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of elements we want to allocate a space in memory
 * @size: is the size in bytes of each of those elements
 *
 * Return: a pointer to newlly alocated memory or null if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* unsigned int for 'a' to make the comparisson with size and nmemb */
	/* ptr needs to be char because on the main the array is char type */
	unsigned int a;
	char *ptr;

	/* first the task condition */
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		ptr[a] = 0;
	return (ptr);
}
