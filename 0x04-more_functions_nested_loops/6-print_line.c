#include "main.h"
/**
 * print_line - the function name
 * description - this draws a line
 * @n: first operand
 * @count: 2nd operand
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (count = 0; count < n; count++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
}
