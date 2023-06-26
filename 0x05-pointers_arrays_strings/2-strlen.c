#include <stdio.h>
/**
 * _strlen - return the length of string
 * @str: the string to get the length of
 * return: the length of @str
 */
int _strlen(char* s) 
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}
