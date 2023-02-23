#include "main.h"

/* 
 * int _isupper(int c) - this is the function name
 * description - it checks for uppercsdr character
 * @c - first opreator
 * Return: 1 if c is upper case else 0
 */
int _isupper(int c);
{

	if (( c <= 'Z') && (c >= 'A'))
	{ 
		return (1);
	}
	else
	{
		return (0);
	}
}
