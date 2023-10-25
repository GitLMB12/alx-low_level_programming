#include "main.h"
/**
 *_puts - prints a string
 *@str: string to print
 *
 *Description: prints a string
 *On Success: return the number of characters printed
 */

/*
 * 1. Declare a function called _puts that
 * 2. Create a while loop that will iterat
 * 3. Insidhar function to print the current character.
 * 4. After the while loop, print a new line.
*/
/*
 * Time Complexity: O(n)
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
