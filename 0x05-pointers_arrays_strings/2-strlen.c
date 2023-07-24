#include <stdio.h>

/**
 *  _strlen - Returns the length of the string.
 * @str: The string to get the length
 * Return: Returns The length of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);

}
