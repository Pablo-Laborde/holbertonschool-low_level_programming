#include <stdio.h>

/**
 * main- prints fiibonacci etc
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int64_t i, j, aux;
	int counter;

	/* code */
	i = 1;
	j = 2;
	printf("%lli", i);
	counter = 1;
	while (counter < 99)
	{
		printf(", %lli", j);
		counter++;
		aux = i + j;
		i = j;
		j = aux;
	}
	printf("\n");
	return (0);
}
