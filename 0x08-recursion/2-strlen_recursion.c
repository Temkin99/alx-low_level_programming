#include "holberton.h"

/**
 * _strlen_recursion - main function
 * @s: char pointer
 * Return: int
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
