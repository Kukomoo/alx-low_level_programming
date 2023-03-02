#include "main.h"
/**
* _strcat - function name
* Description - concatenates two strings
* @dest: pointer char type
* @src: pointer char type
* Return: start of string
*/
char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return begin;
}
