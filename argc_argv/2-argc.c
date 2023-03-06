#include <stdio.h>
#include "main.h"

/**
 * main- function
 *
 * @argc: input
 * @argv: input
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	/* var declaration */
	int i;

	/* code */
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[1]);
	return (0);
}
