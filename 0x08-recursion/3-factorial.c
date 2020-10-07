/**
 * factorial - calculates factorial of a given number
 * @n: the number
 *
 * Return: the value of the factorial of n
 */
int factorial(int n)
{
	int fact;
	int result;

	if (n == 0)
	{
	result = 1;
	}
	else if (n < 0)
	{
	result = -1;
	}
	else if (n == 1)
	{
	result = 1;
	}
	else if (n > 1)
	{
	fact = (n * factorial(n - 1));
	result = fact;
	}
	return (result);
}
