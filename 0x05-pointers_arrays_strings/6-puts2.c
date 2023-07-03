#include "main.h"

/**
 * puts2 - main function
 *
 * @str: pointer of a char
 *
 * Return: nothing
 *
 */

void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}
	for (i = 0; i <= count - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
