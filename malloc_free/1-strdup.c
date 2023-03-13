#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup- function
 *
 * @str: input
 *
 * Return: char
 */
char *_strdup(char *str)
{
	/* var declaration */
	int i;
	char *string;

	/* code */
	printf("%lu\n", sizeof(*str));
	string = malloc(sizeof(*str));
	if (string != NULL)
	{
		i = 0;
		while (str[i] != '\0')
			string[i] = str[i];
		string[i] = '\0';
	}
	return (string);
}
