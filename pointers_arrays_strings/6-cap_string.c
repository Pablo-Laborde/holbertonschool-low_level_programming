#include "main.h"

/**
 * cap_string- function
 *
 * @c: input1
 *
 * Return: char*
 */
char *cap_string(char *c)
{
	/* var declaration */
	int i;

	/* code */
	i = 0;
	while (c[i] != '\0')
	{
		if ((c[i] == ' ') || (c[i] == '\t') || (c[i] == '\n') || (c[i] == ',')
			|| (c[i] == ';') || (c[i] == '.') || (c[i] == '!') || (c[i] == '?')
			|| (c[i] == '"') || (c[i] == '(') || (c[i] == ')') || (c[i] == '{')
			|| (c[i] == '}'))
			if ((c[i + 1] >= 'a') && (c[i + 1] <= 'z'))
				c[i + 1] -= ('a' - 'A');
		i++;
	}
	return (c);
}
