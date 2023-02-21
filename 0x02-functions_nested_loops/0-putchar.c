#include <stdio.h>
#include <string.h>

/**
 * main - This prints _putchar
 * Retrun: This returns 0 
 */
void trim(char *s);

int main(void)
{char x[20] = "_putchar\n";

	for (int i = 0; i < strlen(x); i++)
	{ putchar(x[i]); }
	return (0);
}
