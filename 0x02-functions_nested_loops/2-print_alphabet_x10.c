#include "main.h"

/**
 * print_alphabet_x10 - this is the function name print_alphabet_x10
 * description - prtints the alphabet 10 times
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
