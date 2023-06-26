#include "main.h"
/**
 * _put - print a string
 * @str: the string to print
 * return: void
 */
void _puts(char *str)
{
	for (; str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
