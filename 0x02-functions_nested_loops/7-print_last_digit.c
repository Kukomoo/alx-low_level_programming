#include "main.h"

/**
 * print_last_digit - this is the function name
 * description - checks for the last digit
 * Return: last_digit
 * @n: first operand
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
