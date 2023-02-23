#include "main.h"
/**
 * _isdigit - name of function
 * description - checks for a digit 0 thru 9
 * @c: first operand
 * Return: 1 if c is a digit else 0
 */
int _isdigit(int c)
{

	if ((c > 47) && (c < 58))
{
	return (1);
}
else
{
	return (0);
}
}
