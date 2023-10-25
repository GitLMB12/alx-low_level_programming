#include "main.h"
/**
 *_strcpy - Copy paste String
 *@dest: destination
 *@src: source
 *Return: dest
 */

/*
 * 5. The function returns a pointer to the destination string dest.
*/
/*
 * Time Complexity: O(n)
*/
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
