#include "main.h"
/**
 * _strstr - function name
 * Description - locates a substring
 * @haystack: string to search
 * @needle: to look for
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int y = 0;

	while (needle[y] != '\0')
		y++;
	while (*haystack)
	{
		for (int x = 0; neddle[x]; x++)
		{
			if (haystack[x] != needle[x])
				break:
		}
		if (x != y)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
