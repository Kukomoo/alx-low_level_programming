#include "main.h"
/*
 * more_numbers - this is the function name
 * description - it prints no from 0 to 14 ten times
 */
void more_numbers(void)
{
	int i;
	int count = 0;

	for (count = 0; count < 10; count++)
	{
			for (i = 0; i <= 14; i++)
			{
				_putchar('0'+ i);
			}
	_putchar('\n');
	}
}
