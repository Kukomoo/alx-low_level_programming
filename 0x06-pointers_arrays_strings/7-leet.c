#include "main.h"
/**
 * leet - Function name
 * Description - codes to 1337
 * @str: string
 * Return: pointer
 */
char *leet(char *str)
{
	int i = 0;
	int y;
	char x[10] = {'O','L','E','A','T','?','?','?','?'};

	while (str[i])
	{
		for (y = 0; y <= 7; y++)
		{
			if (str[i] == x[y] || str[i] - 32 == x[y])
				str[i] = y + '0';
		}
		i++;
	}
	return (str);
}
