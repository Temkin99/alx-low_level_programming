#include <stdio.h>
/**
 * _strlen - return the lengthe of string
 * @str: the string to the length of
 * return the length of @str
 */
size_t strlen(const char *str)
{
	size_t length = 0;
	while (*str++)
	length++;
	return (length);
}

