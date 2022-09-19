#include <stdio.h>
#include <string.h>

/**
 * _puts - prints stings of characters
 * @str: holds the sting
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	char text[70];

	strcpy(text, str);
	puts(text);
}
