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
	int *aux;
	int **grid;

	/* code */
	grid = NULL;
	if ((width > 0) && (height > 0))
	{
		grid = malloc(width * sizeof(int *));
		if (grid != NULL)
		{
			for (i = 0; i < width; i++)
				grid[i] = NULL;
			flag = 1;
			i = 0;
			while ((i < width) && (flag == 1))
			{
				aux = malloc(height * sizeof(int));
				if (aux == NULL)
					flag = 0;
				else
					grid[i] = aux;
				i++;
			}
			if (flag == 0)
			{
				for (i = 0; i < width; i++)
					free(grid[i]);
				free(grid);
				grid = NULL;
			}
			else
				for (i = 0; i < width; i++)
					for (j = 0; j < height; j++)
						grid[i][j] = 0;
		}
	}
	return (grid);
}
