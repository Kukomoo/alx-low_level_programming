#include "main.h"
/**
 * _strspn - function name
 * description - gets the lenght fo a prefix substring
 * @s: return from
 * @accept: bytes to add
 * Return: the no. of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	unsigned int byte = 0;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
	{
		if (*s == accept[x])
		{
			byte++;
			break;
		}
		else if (accept[x + 1] == '\0')
			return (byte);
	}
	s++;
	}
	return (byte);
}
