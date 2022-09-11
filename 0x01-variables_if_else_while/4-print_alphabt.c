#include <stdio.h>

/**
 * main - Entry point of the program
 * @void: Null value
 *
 * Return: Return 0 if successfull
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
