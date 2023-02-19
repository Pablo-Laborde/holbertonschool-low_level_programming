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
	while (n != 98)
	{
		if (n > 10)
			_putchar((n / 10) + '0');
		_putchar((n % 10) = '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
