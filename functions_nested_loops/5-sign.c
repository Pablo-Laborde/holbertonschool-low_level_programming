#include "main.h"

/**
 * print_sign- prints the numbers sign
 *
 * @n: passed by main
 *
 * Return: 1 if positive, 0 if 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_puchar('0');
		return (0);
	}
}
