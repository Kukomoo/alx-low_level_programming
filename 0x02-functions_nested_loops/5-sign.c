#include "main.h"

/**
 * print_sign - this is the function name print_sign
 * description - prints the sign of a number
 * Return: 1 if positive 0 if 0 else "-1"
 * @n: first operand
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
