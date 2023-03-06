#include "main.h"

/**
 * _puts_recursion- function
 *
 * @s: input
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	if (s[0] != '\0')
		_puts_recursion(&(s[1]));
}
