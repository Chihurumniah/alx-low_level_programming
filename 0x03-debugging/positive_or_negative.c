#include <stdio.h>

/**
 * positive_or_negative - Determine if a random number is positive.
 *@i: function parameter
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}


}
