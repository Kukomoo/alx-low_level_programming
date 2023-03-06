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
	int z = 0;

	for (int x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (int y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
	return (z);
}
