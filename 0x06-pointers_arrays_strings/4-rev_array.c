#include "main.h"
/**
 * reverse_array - function name
 * description - reverse the content of an array
 * @a: array
 * @n: elements in an array
 */
void reverse_array(int *a, int n)
{
	int i;
	int blank;

	for (i = n - 1; i >= n / 2; i--)
	{
		blank = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = blank;
	}
}
