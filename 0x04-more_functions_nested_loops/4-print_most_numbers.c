#include "main.h"
/**
 * print_numbers - this is the function name
 * description - this function prints from 0 to 9
 */
void print_numbers(void)
{
        int i = 0;

                for (i <= 9; i++)
i                {
			if (i == 2||i == 4)
			{
				continue;
			}
			else
			{
				_putchar(i + '0');
			}	
                }
                _putchar('\n');
}

