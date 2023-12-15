#include "main.h"

/**
* alloc_grid - function that returns a pointer to 2D array of int
* @width: number of columns
* @height: number of rows
* Return: return a pointer to the array otherwise return NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j, size;

	if (width <= 0 && height <= 0)
		return (NULL);

	while (i < height)
	{
		while (j < width)
		{
			j++;
		}
		i++;
	}
	size = malloc(sizeof(int) * (i + j + 2));
	if (alloc_grid == NULL)
		return (NULL);
	return (size);
}
