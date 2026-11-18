#include "main.h"

/**
 * print_sign - Print the sign of an integer.
 * @n: Integer whose sign is printed.
 *
 * Return: 1 if positive, 0 if zero, or -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
