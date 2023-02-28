#include "main.h"
/**
 * _strcpy - function name
 * description - copies the string pointed by src
 * @dest: pointer
 * @src: pointer to source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
