#include <stdarg.h>
/**
* sum_them_all- returns sum of arguments
* @n:numner of arguments
* Return: returns sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	sum = 0;
	if (n == 0)
	{
	return (0);
	}
	va_list my_list;

	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(my_list, int);
	}
	va_end(my_list);
	return (sum);
}
