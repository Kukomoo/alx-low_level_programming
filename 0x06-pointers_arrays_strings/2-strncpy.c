#include "main.h"
/**
 * _strncpy - Function name
 * description - this function copies a string from source to destination
 * @dest: destination 
 * @src: source
 * @n: number of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (src[i++])
		length++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = length; i < n; i++)
		dest[i] = '\0';
	return (dest);
