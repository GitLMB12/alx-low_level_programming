#include "main.h"

/*
 *_putchar - writes the character c to stdout
 *@s : pointer to point a string
 * _puts_recursion - my function that prints a string
 *
 *return :void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
