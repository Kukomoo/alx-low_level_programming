#include "main.h"
/**
 * main - check the code
 * _islower - used to check if character is lowcase
 * int c is used to declare c
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
