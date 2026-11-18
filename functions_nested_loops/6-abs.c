#include "main.h"

/**
 * _abs - Compute the absolute value of an integer.
 * @n: Integer whose absolute value is needed.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
