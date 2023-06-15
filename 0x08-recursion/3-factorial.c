/**
 * factorial - Function name
 * decription - returns factorial of a number
 * @n: int variable
 * Return: factorial of a given number
 */
#include "main.h"
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n));
}
