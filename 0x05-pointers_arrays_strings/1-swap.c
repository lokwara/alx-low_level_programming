#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: empty
 */

void swap_int(int *a, int *b)
{
	int example = *a;
	*a = *b;
	*b = example;
}
