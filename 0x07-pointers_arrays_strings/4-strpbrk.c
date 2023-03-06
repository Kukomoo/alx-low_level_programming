#include "main.h"
/**
 * _strpbrk - function name
 * Description - searches a string for any set of bytes
 * @s: main string
 * @accept: bytes to look for
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (int x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
