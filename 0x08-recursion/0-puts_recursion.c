#include "main.h"
/**
 * _puts_recursion - main function
 * @s: char pointer
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	is(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
