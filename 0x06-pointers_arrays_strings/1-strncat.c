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
	char *start = dest;

	for ( int i = 0; dest[i] !='\0'; i++)
	for ( int s = 0; src[s] < n; s++)
	{
		*dest = *src;
		i++;
	}
	*dest = '\0';
	return (start);
}	
