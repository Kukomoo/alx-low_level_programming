#include "main.h"
long _sqrt_assist(long n, long start, long end);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * description of _sqrt_recursion - finds  natural square root of an int
 * @n: int to find it's natural square root
 * Return: natural square root of int n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_assist(n, 0, n));
}
/**
 * _sqrt_assist - assisting Function
 * description of _sqrt_assist - assist in finding natural square root
 * @start: index beginning of the search
 * @end: index last int in the search
 * @n: int of the square root
 * Return: natural square root of int n
 */
long _sqrt_assist(long n, long start, long end)
{
	long mid;

	long square;

	if (start > end)
	{
	return (-1);
	}
	mid = ((start + end) / 2);
	square = mid * mid;

	if (square == n)
	{
	return (mid);
	}
	if (square > n)
	{
	return (_sqrt_assist(n, start, mid - 1));
	}
	return (_sqrt_assist(n, mid + 1, end));
}
