#include <stdlib.h>
#include "main.h"

/**
 * create_array- function
 *
 * @size: input1
 * @c: input2
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	/* var declaration */
	char *string;

	/* code */
	if (size > 0)
	{
		string = malloc(size * sizeof(c));
		string[0] = c;
		string[1] = '\0';
	}
	else
		string = NULL;
	return (string);
}
