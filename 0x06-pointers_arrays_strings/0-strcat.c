#include "main.h"

/*creat a function */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (src[i] != '/0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = "/0";
	return (dest);

/* concatenates  string "dest" to "src" */
