#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: checks for a number
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{

	if (c >= 40 && c <= 57)
	{
	return (1);
	}
	return (0);
}
