#include "holberton.h"
/**
* _isupper - Checks whether character is in uppercase
* @c:represents the value to be checked
*
*Return: returns a value of 1 if in uppercase else 0
*/
int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result =  0;
	}
	return (result);
}
