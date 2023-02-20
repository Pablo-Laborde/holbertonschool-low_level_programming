#include <stdio.h>

/**
 * main- prints all possible combinations of two numbers od two digits each
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i, j, max;

	max = 100;
	for (i = 0; i < (max - 1); i++)
		for (j = (i + 1); j < max; j++)
		{
			if (i < j)
			{
				if (i < 10)
					putchar('0');
				else
					putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				if (j < 10)
					putchar('0');
				else
					putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if ((i + 2) != max)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	return (0);
}
