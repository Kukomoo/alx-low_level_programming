#include "main.h"
/**
 * puts2 - function name
 * Description - prints every other character
 * @str: pointer
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if ( x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
_putchar('\n');
}
