#include "main.h"
/**
 * strcmp - Function name 
 * description - compares two strings
 * @s1: points to first string
 * @s2: points to 2nd string
 * Return: comparison of the stirngs
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s2 && *s1) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
