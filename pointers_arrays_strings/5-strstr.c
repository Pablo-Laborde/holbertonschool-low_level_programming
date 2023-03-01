#include <stdio.h>
#include "main.h"

/**
 * _strstr- function
 *
 * @haystack: input1
 * @needle: input2
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	/* var declaration */
	int i, j, flag;

	/* code */
	i = 0;
	flag = 0;
	while ((haystack[i] != '\0') && (flag))
	{
		j = 0;
		if (needle[j] == '\0')
			flag = 1;
		while ((haystack[i] == needle[j]) && (haystack[i] != '\0') && (needle[j] != '\0'))
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			flag = 2;
		else
			i++;
	}
	if (flag == 2)
		return (&(haystack[i]));
	else
		return (NULL);
}
