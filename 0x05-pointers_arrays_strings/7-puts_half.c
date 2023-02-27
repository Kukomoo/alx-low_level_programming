#include "main.h"
/**
 * puts_half - function name
 * description - prints half of a string 
 * @str - operator
 */
void puts_half(char *str)
{
	int string = 0;
	int x;
	int y;

	while (str[string] != '\0')
		string++;
	if (string % 2 == 0 )
		y = string / 2;
	else
		y = (string + 1)/2;
	for (x = y; x < string; x++)
		_putchar(str[x]);
	_putchar('\n');
}
