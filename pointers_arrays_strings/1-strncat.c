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
	int i, j, flag;

	/* code */
	i = 0;
	j = 0;
	flag = 0;
	while (dest[i] != '\0')
		i++;
	while (flag == 0)
	{
		if (src[j] == '\0')
			flag = 1;
		if (j == n)
			flag = 2;
		dest[i] = src[j];
		i++;
		j++;
	}
	if (flag == 2)
		dest[i] = '\0';
	return (dest);
}
