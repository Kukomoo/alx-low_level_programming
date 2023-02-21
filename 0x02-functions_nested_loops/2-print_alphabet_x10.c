#include "main.h"

/**
 * main void print_alphabet_x10(void) - decleration
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)

{
	char alpha;
	int record = 0;

	while (record <= 9)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
			_putchar('\n');
			record++;
	}
}
