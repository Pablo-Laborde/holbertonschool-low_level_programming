#include "main.h"

/** rev_string- function
 *
 * @s: input
 *
 * Return: void
 */
void rev_string(char *s)
{
	/* var declaration */
	int i, j, counter;

	/* code */
	i = 0;
	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	for (j = (counter - 1); j >= 0; j--)
		_putchar(s[j]);
}
