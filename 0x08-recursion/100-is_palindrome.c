#include "main.h"

/**
 * _strlen_recursion - string leng func
 * @s: char pointer
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

/**
 * check - helper
 * @str: char pointer
 * @len: int var
 * @count: int var
 * Return: int
 */

int check(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (check(str, len - 1, count + 1));
	return (0);
}




/**
 * is_palindrome - main func
 * @s: chr pointer
 * Return: int
 */


int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (check(s, len - 1, count));
}
