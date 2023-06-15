/**
 * _sqrt_recursion - Function name
 * decription - returns natural square root of an int
 * @n: int to find it's natural square root
 * @start: index of beginning of the search
 * @end: index of the last int of the search
 * Return: natural square root of int n
 */
#include "main.h"
_sqrt_assist(int n, int start, int end);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_assist(n, start, end));
}
_sqrt_assist(int n, int start, int end)
{
	if (start > end)
	{
	return (-1);
	}
	int mid = ((start + end) / 2);
	int square = mid * mid;

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
