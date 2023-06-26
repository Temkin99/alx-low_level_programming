#include <stdio.h>
/**
 * swap_int -  swap thev alue of two integer
 * @a: the first integer to be swaped
 * @b: the second integer to be swaped
 *
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp =*a;
	*a = *b;
	*b = temp;
}
