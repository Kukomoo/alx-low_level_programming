#include "main.h"
/**
 * print_diagonal - the function name
 * description - this draws a diagonal line
 * @n: first operand
 */
void print_diagonal(int n)
{
	int count;
	int space;

	if (n <= 0)
{
	_putchar('\n');
}
else
{
		for (count = 0; count < n; count++)
	{
for (space = 0; space < count; space++)
{
	_putchar(32);
}
	_putchar(92);
	_putchar('\n');
	}
}
}
