#include <stdio.h>
/**
 * swap_int - swaps the value of two integer
 * @a is the first integer to swap
 * @b is the second integer to swap
 * return nothing
 */
void swap_int(int *a, *b)
/* the function that swaps the value of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
