#include "main.h"
/**
 * print_chessboard - function name
 * description - you can tell from the name lol
 * @a: row
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			if (y == 7)
			{
				_putchar(a[x][y]);
				_putchar('\n');
			}
			else
				_putchar(a[x][y]);
		}
	}
}
