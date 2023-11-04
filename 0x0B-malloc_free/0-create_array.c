#include "main.h"

/**
 * create_array - creates an array of chars
 *@c: Character to insert
 *@size: Size of the array
 *Return: NULL if size is zero or if it fails,
 *pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *r;

	if (size == 0)
	{
		return (NULL);
	}
	r = malloc(sizeof(char) * size);
	if (r == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		r[i] = c;
		i++;
	}
	return (r);
}
