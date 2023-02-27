#include "main.h"
/**
 * reset_to_98 - function name
 * @*n: pointer
 * decription - this updated an int value to 98
 */
void reset_to_98(int *n)
{
int n;
int *p = &n;
*p = 98;
_putchar(n);
return (0);
}
