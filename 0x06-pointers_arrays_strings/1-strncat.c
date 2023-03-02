#include "main.h"
/**
 * _strncat - Function namw
 * decription - concatenates two strings up till n 
 * @dest: destination string
 * @src: appended string
 * @n: number of characters to append
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (dest[i++])
	{
		length++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[length++] = src[i];
	}
	return (dest);
}
