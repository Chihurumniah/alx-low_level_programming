#include <stdio.h>

/**
 *main - Entry poin of the programe
 *@void: null value
 *
 *Description: Print alphabet lowercase
 *Return: Returns 0;
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
