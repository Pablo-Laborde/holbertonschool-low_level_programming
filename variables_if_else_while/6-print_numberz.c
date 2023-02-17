#include <stdio.h>

/**
 * main- prints digits from 0 to 9
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i;
	char c;

	/* code */
	for (i = 0; i < 10; i++)
	{
		c = (char)(i + '0');
		putchar(c);
	}
	putchar('\n');
	return (0);
}
