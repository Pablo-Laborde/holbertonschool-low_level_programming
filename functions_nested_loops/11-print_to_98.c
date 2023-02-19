#include "main.h"

/**
 * print_to_98- prints numbers to 98
 *
 * @n: passed by main
 *
 * Return: void
 */
void print_to_98(int n)
{
	/* code */
	do {
		print_number(n);
		if (n < 98)
			n++;
		else
			n--;
	} while (n != 98);
	_putchar('\n');
}

/**
 * print_number- prints number
 *
 * @n: passed by others
 *
 * Return: void
 */
void print_number(int n)
{
	/* var declaration */
	int length;

	/* code */
	length = pot(n);
	if (n < 0)
		_putchar('-');
	while (length > 0)
	{
		_putchar((n / one_zero(length)) + '0');
		n %= one_zero(length);
		length--;
	}
}

/**
 * pot- recursion to calculate the length
 *
 * @n: passed to calculate the length
 *
 * Return: length
 */
int pot(int n)
{
	if ((n / 10) == 0)
		return (1);
	else
		return (1 + pot(n / 10));
}

/**
 * one_zero- does 10 power to k
 *
 * @k: is the value
 *
 * Return: 10 power k
 */
int one_zero(int k)
{
	if (k == 0)
		return (1);
	else if (k == 1)
		return (10);
	else
		return (10 * one_zero(k - 1));
}
