#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- function
 *
 * @argc: input
 * @argv: input
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	/* var declaration */
	int i, aux, sum, flag;

	/* code */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		sum = 0;
		flag = 0;
		while ((i < argc) && (flag == 0))
		{
			if (argv[i] != '0')
			{
				aux = atoi(argv[1]);
				if (aux != 0)
					sum += aux;
				else
					flag = 1;
			}
			i++;
		}
		if (flag == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", sum);
			return (0);
		}
	}
}
