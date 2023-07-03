#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
while (n--)
{
*p++ = *src++;
}
return (dest);
}

int main(void)
{
char src[] = "Hello, world!";
char dest[20];
_memcpy(dest, src, sizeof(src));
printf("Copied string is: %s\n", dest);
return (0);
}










