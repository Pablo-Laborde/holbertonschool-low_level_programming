#include "main.h"

/**
 * puts_half- function
 *
 * @str: input
 *
 * Return: void
 */
void puts_half(char *str)
{
	/* var declaration */
	int i, j;

	/* code */
	i = 0;
	while (str[i] != '\0')
		i++;
	for (j = (i / 2); j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
