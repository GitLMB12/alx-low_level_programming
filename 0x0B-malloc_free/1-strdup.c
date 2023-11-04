#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error
*/

char *_strdup(char *str)
{
	char *cpy;
	int x;
	int y;

	if (str == NULL)
	{
		return (NULL);
	}
	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		x++;
		y++;
	}
	cpy = malloc(sizeof(char) * (y + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}
	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		cpy[y] = str[x];
		x++;
		y++;
	}
	cpy[y] = '\0';
	return (cpy);
}
