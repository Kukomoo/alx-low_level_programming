#include "main.h"
/**
 * _islower - this is the function name _islower
 * description - checks for the lower alphabet
 * Return: 1 if true 0 if false
 * @c: first operand
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
