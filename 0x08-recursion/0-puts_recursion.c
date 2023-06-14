/**
 * _puts_recursion - Function name
 * decription - prints a string of characters
 * @s: pointer to character
 * Return void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0'){
		_putchar('\n');
		return ;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
