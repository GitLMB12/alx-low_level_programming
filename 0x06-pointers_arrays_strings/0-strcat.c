#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char str3[100];

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		str3[j] = dest[i];
		i++;
		j++;
	}
	/* Insert the second string*/
	/* in the new strin*/
	i = 0;

	while (src[i] != '\0')
	{
		str3[j] = src[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	return (0);
}
