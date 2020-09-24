#include "holberton.h"
/**
*  _isdigit - checks whether argument is a digit
* @c: argument to be checked
*
*Return: return 1 if digit and 0 if not
*/
int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
