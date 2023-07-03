#include "main.h"

/**
 * _strpbrk - main func
 * @s: char pointer var
 * @accept: char pointer var
 * Return: returns char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
