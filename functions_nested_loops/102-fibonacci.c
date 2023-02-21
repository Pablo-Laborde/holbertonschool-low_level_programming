#include <stdio.h>

/**
 * main- pritns the first 50 numbers of fibonacci, starting with 1 and 2
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i, j, aux, count;

	/* code */
	i = 1;
	j = 2;
	printf("%d", i);
	count = 1;
	while (count < 50)
	{
		printf(", %d", j);
		count++;
		aux = i + j;
		i = j;
		j = aux;
	}
	printf("\n");
	return (0);
}
