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
	int i, j, k, flag;

	/* code */
	i = 0;
	flag = 0;
	while ((haystack[i] != '\0') && (flag == 0))
	{
		j = 0;
		if (needle[j] == '\0')
			flag = 1;
		if (haystack[i] == needle[j])
		{
			k = 0;
			while ((haystack[i + k] == needle[j + k]) && (haystack[i + k] != '\0')
					&& (needle[j + k] != '\0'))
				k++;
			if (needle[j + k] == '\0')
				flag = 2;
		}
		else
			i++;
	}
	if (flag == 2)
		return (&(haystack[i]));
	else
		return (NULL);
}
