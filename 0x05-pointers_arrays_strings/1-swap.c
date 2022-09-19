/**
 * swap_int - swaps value of a and b
 * @a: first value;
 * @b: second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;

	*a = b1;
	*b = a1;
}
