#include "main.h"

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
	int length, bt;

	/* code */
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	length = length(n);
	while (length > 0)
	{
		bt = base_ten(length - 1);
		_putchar((n / bt) + '0');
		n %= bt;
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
int length(int n)
{
	/* var declaration */
	int length;

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
int base_ten(int n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (10);
	else
		return (10 * base_ten(n - 1));
}
