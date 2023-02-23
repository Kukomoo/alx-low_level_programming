#include "main.h"

/*
 * _isupper - _isupper checks for uppercase character
 * @c: first operand
 * description - checks for uppercase
 * Return: 1 if c is upper case else 0
 */
int _isupper(int c)
{

	if ((c <= 'Z') && (c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
