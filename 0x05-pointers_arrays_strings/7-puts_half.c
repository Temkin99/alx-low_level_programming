#include "main.h"

/**
 * puts_half - main function
 *
 * @str: pointer
 *
 * Return: nothing
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; i < count; i++)
			_putchar(str[i]);
	}
	else
	{

		for (i = (count + 1) / 2; i < count; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
