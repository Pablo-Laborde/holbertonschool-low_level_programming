#include <stdlib>
#include "main.h"

/**
 * str_concat- function
 *
 * @s1: input1
 * @s2: input2
 *
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	/* avr declaration */
	int i, j, k, l, len;
	char *string;

	/* code */
	string = NULL;
	if ((s1 != NULL) || (s2 != NULL))
	{
		i = 0;
		j = 0;
		if (s1 != NULL)
			while (s1[i] != NULL)
				i++;
		if (s2 != NULL)
			while (s2[j] != NULL)
				j++;
		len = i + j + 1;
		for (k = 0; k <= i; k++)
			string[k] = s1[k];
		for (l = 0; l <= j; l++)
		       string[k + l] = s2[l];
		string[k + l] = '\0';
	}
	return (string);
}
