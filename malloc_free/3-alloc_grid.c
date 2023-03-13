#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid- function
 *
 * @width: input1
 * @height: input2
 *
 * Return: **int
 */
int **alloc_grid(int width, int height)
{
	/* var declaration */
	int i, j;
	int **grid;

	/* code */
	grid = NULL;
	if ((width > 0) && (height > 0))
	{
		grid = malloc(width * height * sizeof(int));
		if (grid != NULL)
		{
			for (i = 0; i < width; i++)
				for (j = 0; j < height; j++)
					grid[i][j] = 0;
		}
	}
	return (grid);
}
