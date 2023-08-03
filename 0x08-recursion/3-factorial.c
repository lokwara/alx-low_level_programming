#include "main.h"
/**
 * int factorial(int n) - get factorial number
 * @n: To get factorial
 *
 * Return: Nothing
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (0);

	return (n * factorial(n-1));
}
