#include "main.h"
#include <stdio.h>

/**
 * sum_3_5- sums all the numbers multiple of 3 and 5 below 1024
 *
 * Return: void
 */
void sum_3_5(void)
{
	/* var declaration */
	int i, j, sum;

	/* code */
	sum = 0;
	for (i = 3; i < 1024; i += 3)
		sum += i;
	for (j = 5; j < 1024; j += 5)
		sum += j;
	printf("%d\n", sum);
}
