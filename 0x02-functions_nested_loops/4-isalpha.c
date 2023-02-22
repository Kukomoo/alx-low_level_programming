#include "main.h"

/**
 * _isalpha - this is the function name _isalpha
 * description - prints upercase and lowercase alphabet
 * Return: 1 if true 0 if false
 * @c: first operand
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
