/**
 * _pow_recursion - Function name
 * decription - returns x powered by y
 * @x: int base variable
 * @y: int power variable
 * Return: value of x raised to the power of y
 */
#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
