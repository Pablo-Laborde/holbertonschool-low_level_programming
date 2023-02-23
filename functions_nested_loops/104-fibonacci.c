#include <stdio.h>

/**
 * main- prints fiibonacci etc
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	unsigned int i, j, aux;
	int counter;

	/* code */
	i = 1;
	j = 2;
	printf("%lu", i);
	counter = 1;
	while (counter < 99)
	{
		printf(", %lu", j);
		counter++;
		aux = i + j;
		i = j;
		j = aux;
	}
	printf("\n");
	return (0);
}
