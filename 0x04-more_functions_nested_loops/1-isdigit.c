#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: character 
 *
 * Return: 0 if not uppercase or 1 if its uppercase
 */


int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
