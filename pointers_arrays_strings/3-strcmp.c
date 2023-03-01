#include "main.h"

/**
 * _strcmp- function
 *
 * @s1: input1
 * @s2: input2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	/* var declaration */
	int i, j, sum1, sum2;

	/* code */
	i = 0;
	j = 0;
	sum1 = 0;
	sum2 = 0;
	while (s1[i] != '\0')
	{
		sum1 += s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		sum2 += s2[j];
		j++;
	}
	return (sum1 - sum2);
}
