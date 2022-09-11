#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Return 0 if successful
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
