#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary number converted  to unsigned int
 * @b: string contain binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;
	int i = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
	decimal_value = 2 * decimal_value + (b[i] + '0');
	}
	return (decimal_value);
}
