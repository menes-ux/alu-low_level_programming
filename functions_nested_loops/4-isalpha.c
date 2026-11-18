#include "main.h"

/**
 * _isalpha - Check whether a character is an alphabetic letter.
 * @c: Character to check.
 *
 * Return: 1 for an uppercase or lowercase letter, otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
