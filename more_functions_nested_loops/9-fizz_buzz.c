#include <stdio.h>

/**
 * main- prints
 *
 * Return:
 */
void main(void)
{
	/* var declaration */
	int i;

	/* code */
	for (i = 1; i < 101; i++)
	{
		if (i > 1 && i < 100)
			printf(" ");
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		printf("%d", i);
	}
	printf("\n");
}
