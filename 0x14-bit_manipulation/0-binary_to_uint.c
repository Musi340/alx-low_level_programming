#include <stdlib.h>
#include "holberton.h"
/**
 * my_power - finds the power of a number
 * @my_base: the base
 * @my_exponent: the exponent
 *
 * Return: 0 if exponent is less than or equal to 0
 * else the power of the number
 */
int my_power(int my_base, int my_exponent)
{
	int result;

	if (my_exponent < 0)
	{
		return (-1);
	}
	if (my_exponent == 0)
	{
		return (1);
	}
	result =  my_base * my_power(my_base, my_exponent - 1);
	return (result);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:points to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if b is null
 * or one or more chars in the string b
 * that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int power;
	int count;
	unsigned int sum;

	i = 0;
	count = 0;
	sum = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			power = my_power(2, count);
			sum += power;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		i--;
		count++;
	}
	return (sum);
}
