#include "main.h"
#include <stdio.h>
/**
 * print_number - function name
 * description - prints an integer
 * @n: number of integer
 */
void print_number(int n)
{
	unsigned int y;

	y = n;
	if (n < 0)
	{
	_putchar('-');
	y = -n;
	}
	if (y / 10 != 0)
	{
	print_number(number / 10);
	}
	_putchar((y % 10) + '0');
}
