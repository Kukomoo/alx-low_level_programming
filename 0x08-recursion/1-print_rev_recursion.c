/**
 * _print_rev_recursion - Function name
 * decription - prints a string of characters in reverse
 * @s: pointer to character
 * Return void
 */
#include "main.h"
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    return;
    
    _print_rev_recursion(s + 1);
    _putchar(*s);
}
