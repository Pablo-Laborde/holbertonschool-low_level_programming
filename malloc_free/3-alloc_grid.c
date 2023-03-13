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
	int i, flag;
	int **grid;
	
	/* code */
	grid = NULL;
	if ((width > 0) && (height > 0))
	{
		grid = malloc(width * sizeof(int *));
		if (grid != NULL)
		{
			flag = 1;
			for (i = 0; i < width; i++)
			{
				grid[i] = malloc(height * sizeof(int));
				if (grid[i] == NULL)
					flag = 0;
			}
			if (flag == 0)
			{
				for (i = 0; i < width; i++)
					free(grid[i]);
				free(grid);
			}
		}
	}
	return (grid);
}
