#include "main.h"
/**
 * swap_int - function name
 * description - this swaps the values of two int
 * @a: first pointer
 * @b: 2nd pointer
 */
void swap_int(int *a, int *b)
{
	int swap = *b;
	*b = *a;
	*a = swap;
}
