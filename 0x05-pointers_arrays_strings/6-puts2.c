#include "main.h"

/**
 *puts2 - prints part of a string
 *@str: string to be printed
 *
 * Return: void
 **/

/*
 * 1. Declare a function called puts2 that takes a string as an argument.
 * 2. Declare an integer variable called i and initialize it to 0.
 * 3ough the string until it reaches the null character.
 * 4. Inside the while loop, create an if state
*/
/*
 * Time Complexity: O(n)
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
