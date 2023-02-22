#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	while (n >= 10)
	{
		n = n / 10;
	}
	return (last_digit);
}
