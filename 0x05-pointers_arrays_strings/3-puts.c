#include <stdio.h>
#include <stdout.h>
/**
 * _put - print a string
 * @str: the string to print
 * return: void
 */
void _puts(char* str) 
{
    while (*str != '\0') 
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
