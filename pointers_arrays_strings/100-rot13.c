#include "stdio.h"

/**
 * rot13- function
 *
 * @c:
 *
 * Return: char*
 */
char *rot13(char *c)
{
	/* var declaration */
	int i, j;

	/* code */
	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while ((j < 13) && (((c[i] >= 'a') && (c[i] <= 'z')) &&
					((c[i] >= 'A') && (c[i] <= 'Z'))))
		{
			c[i]++;
			j++;
			if ((c[i] == ('z' + 1)) && (j < 13))
				c[i] = c[i] - 26;
		}
	}
	return (c);
}
