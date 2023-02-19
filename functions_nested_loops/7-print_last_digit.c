#include "main.h"

/**
 * print_last_digit- prints last digit
 *
 * @n: passed by main
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	/* var declaration */
	int m;

	/* code */
	m = n % 10;
	_putchar(m + '0');
	return (m);
}
