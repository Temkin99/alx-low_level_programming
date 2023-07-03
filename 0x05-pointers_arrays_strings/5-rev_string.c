#include "main.h"
#include <stdio.h>

/**
 * rev_string - main function
 *
 * @s: pointer of char
 *
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		i--;
		j++;
	}
}
