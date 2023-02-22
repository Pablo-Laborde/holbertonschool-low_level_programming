#include "main.h"

typedef unsigned int uint;

/**
 * print_number- prints
 *
 * @n: input
 *
 * Return: void
 */
void print_number(int n)
{
	/* var declaration */
	uint k, length, bt;

	/* code */
	k = -1 * n;
	if (k < 0)
	{
		_putchar('-');
		k = n * -1;
	}
	length = get_length(k);
	while (length > 0)
	{
		bt = base_ten(length - 1);
		_putchar((k / bt) + '0');
		k %= bt;
		length--;
	}
}

/**
 * length- calculates the length
 *
 * @n: input
 *
 * Return: length
 */
uint get_length(uint n)
{
	/* var declaration */
	uint length;

	/* code */
	length = 0;
	while (n > 9)
	{
		length++;
		n /= 10;
	}
	return (length + 1);
}

/**
 * base_ten- base ten
 *
 * @n: input
 *
 * Return: base ten
 */
uint base_ten(uint n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (10);
	else
		return (10 * base_ten(n - 1));
}
