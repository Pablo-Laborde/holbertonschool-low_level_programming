#include <stdio.h>
#include "main.h"

/**
 * print_diagsums- function
 *
 * @a: input1
 * @size: input2
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	/* var declaration */
	int i, d1, d2;

	/* code */
	d1 = 0;
	d2 = 0;
	for (i = 0; i < size; i++)
	{
		d1 += a[i][i];
		d2 += a[i][size - 1 - i];
	}
	printf("%d, %d\n", d1, d2);
}
