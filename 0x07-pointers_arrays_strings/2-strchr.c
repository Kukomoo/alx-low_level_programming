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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
