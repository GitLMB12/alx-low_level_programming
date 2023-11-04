#include "main.h"

/**
* str_concat - a function that concatenates two strings
*@s1:First string
*@s2:Second string
*
*
*Return: NULL in case of failure
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	y = 0;
	for (; s2[x]; x++)
	{
		if (x == 0)
		{
			for (; s1[x]; x++)
				y++;
		}
		y++;
	}
	concat = malloc(sizeof(char) * (y + 1));
	if (concat == NULL)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x] != '\0')
	{
		concat[y] = s1[x];
		x++;
		y++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		concat[y] = s2[x];
		x++;
		y++;
	}
	concat[y] = '\0';
	return (concat);
}
