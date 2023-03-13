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
	int i, j, flag;
	int **grid;

	/* code */
	grid = NULL;
	if ((width > 0) && (height > 0))
	{
		grid = (int **)malloc(width * sizeof(int *));
		if (grid != NULL)
		{
			flag = 1;
			i = 0;
			while ((i < width) && (flag == 1))
			{
				grid[i] = (int *)malloc(height * sizeof(int));
				if (grid[i] != NULL)
					i++;
				else
					flag = 0;
			}
			if (flag == 0)
			{
				for (i = 0; i < width; i++)
					free(frid[i]);
				free(grid);
				grid = NULL;
			}
			else
				for (i = 0; i < width; i++)
					for (j = 0; j < height; j++)
						grid[i][j] = 0;

	}
	return (grid);
}