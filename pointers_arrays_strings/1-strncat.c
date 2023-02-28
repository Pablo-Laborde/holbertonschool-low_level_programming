#include "main.h"

/**
 * _strncat- function
 *
 * @dest: input1
 * @src: input2
 * @n: input3
 *
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	/* var declaration */
	int i, j;

	/* code */
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((j < n) && (src[j] != '\n'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
