#include "main.h"

/**
 * _memset - Function name
 * @s: pointer to string
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}

