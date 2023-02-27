#include "main.h"
/**
 * print_rev - function name
 * description - prints a string in reverse 
 * @s - first pointer
 */
void print_rev(char *s)
{
	int string = 0;
	int r;

	while (s[string])
		string++;
	for (r = string - 1; r >=0; r--)
		_putchar(s[r]);
	_putchar('\n');
}
