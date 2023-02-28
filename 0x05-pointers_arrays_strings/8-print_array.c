#include "main.h"
#include <stdio.h>
/**
 * print_array - function name
 * description - prints elements of an array of integers
 * @a: pointer
 * @n: operand
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (n--; n >= 0; n--, x++)
	{
		printf("%d", a[x]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
