#include <stdio.h>
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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", to_int(argv[1]) * to_int(argv[2]));
		return (0);
	}
}

/**
 * to_int- function
 *
 * @argc: input
 * @argv: input
 *
 * Return: always 0
 */
int to_int(char *num)
{
	/* var declaration */
	int i, res;

	/* code */
	i = 0;
	res = 0;
	while (num[i] != '\0')
	{
		res *= 10;
		res += num[i] + '0';
	}
	return (res);
}
