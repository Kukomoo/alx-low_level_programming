/**
 * _strlen_recursion - Function name
 * decription - returns length of string
 * @s: pointer to character
 * Return: count of characters
 */
#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
