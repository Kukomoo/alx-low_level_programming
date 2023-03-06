#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function name
 * Description - prints the sum of two diagonals
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size - 1;
	int add1 = 0;
	int add2 = 0;
	int mult = size * size;

	for (x <= mult)
	{
		add1 += a[x];
		x = x + size + 1;
	}
	for (y < (mult - 1))
	{
		add2 += a[y];
		y = y + size - 1;
	}
	printf("%d, %d\n", add1, add2);
}
