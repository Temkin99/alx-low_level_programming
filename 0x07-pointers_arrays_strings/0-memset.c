#include "main.h"
/**
 * _memset - file a block of memory with spesific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of byte to be changed
 *
 * return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for(; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

