i#include "main.h"

/**
 * _memcpy - function name
 * descritpion - copy memory area
 * @dest: destination to copy to
 * @n: nu of bytes
 * @src: area to cp from
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ptr);
}

