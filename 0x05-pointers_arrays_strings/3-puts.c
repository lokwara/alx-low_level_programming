#include "main.h"

/**
 * _puts - Prints a string.
 * @str: The string to be print
 * Return: null
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
