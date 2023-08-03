#include "main.h"
/**
 * _pow_recursion - write a function that powers x
 * @x: value of x
 * @y: value of y
 *
 * Return: return value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
