#include "main.h"
/**
 * rev_string - function name
 * description - reverses a string
 * @s: pointer
 */
void rev_string(char *s)
{
	int string = 0;
	int x;
	char null;

	while (s[string] != '\0')
		string++;
	for (x = 0; x < string / 2; x++)
	{
		null = s[x];
		s[x] = s[string - x - 1];
		s[string - x - 1] = null;
	}
}
