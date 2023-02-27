#include "main.h"
/**
 * _puts - name of the function
 * description - this prints a string 
 * @str: 1st pointer
 */
void _puts(char *str)
{
	int s = 0;
	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
