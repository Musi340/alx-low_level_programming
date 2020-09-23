#include "holberton.h"
/**
 *  _islower - checks for the letters of the alphabet in lowercase
 * @c: represents ascii value of characters
 *
 *Return: 1 is lowercase letter and 0 if not
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
{
	result = 1;
}
	else
{
	result = 0;
}
	return (result);
}

