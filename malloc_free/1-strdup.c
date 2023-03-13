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
	int i ;
	char *string;

	/* code */
	string = malloc(sizeof(str));
	if (str[i] != NULL)
	{
		i = 0;
		while (str[i] != '\0')
			string[i] = str[i];
		string[i] = '\0';
	}
	return (string);
}
