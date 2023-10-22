#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * at most n bytes of src are copied.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: number of bytes to be used.
 *
 * Return: pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
