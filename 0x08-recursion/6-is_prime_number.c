#include "main.h"
int is_prime_number_assist(int n, int divisor);
/**
 * is_prime_number - function name
 * description - checks if n is prime using _is_prime_number_assist function
 * @n: int to be checked if prime or not
 * Return: 1 if n is prime else it returns 0
 */
int is_prime_number(int n)
{
	return (is_prime_number_assist(n, n - 1));
}
/**
 * is_prime_number_assist - function name
 * description - checks if n is divisable is prime recursively
 * @n: int to be checked
 * @divisor: divisor to test if n is prime
 * Return: 1 if n is prime else 0
 */
int is_prime_number_assist(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number_assist(n, divisor - 1));
}
