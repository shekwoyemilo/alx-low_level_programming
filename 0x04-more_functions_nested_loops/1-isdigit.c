#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The number to be checked
 * Return: 1 for a character that will be a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
