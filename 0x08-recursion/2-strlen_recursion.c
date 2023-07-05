#include "holberton.h"

/**
 * _strlen_recursion - main function
 * @s: char pointer
 * Return: int
 */


int _strlen_recursion(char *s)
{
	int longit = 0;
	if (*s)
	{

		longit++;
		longit += str_recursion(s + 1);
	}
		return (longit);
}
