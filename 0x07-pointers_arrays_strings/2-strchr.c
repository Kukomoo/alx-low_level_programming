#include "main.h"
/**
 * _strchr - Function name
 * Description - finds specific character in a string
 * @s: main string
 * @c: character to locate
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (NULL);
}
