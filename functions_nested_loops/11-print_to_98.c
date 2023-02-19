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
	int length, aux;

	/* code */
	aux = n;
	length = 0;
	while (aux != 0)
	{
		length++;
		aux /= 10;
	}
	if (n < 0)
		_putchar('-');
	while (length > 1)
	{
		_putchar((n / (10 ** length)) + '0');
		n %= (10 ** length);
		length--;
	}
	_putchar((n % 10) + '0');
}
