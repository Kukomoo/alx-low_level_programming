#include "main.h"
/**
 * _strlen - function name
 * description - return the length of a string
 * @s: pointer
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int string = 0;

	while (*s != '\0')
	{
		string++;
		s++;
	}
	return (string);
}
