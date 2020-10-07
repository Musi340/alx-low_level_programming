/**
 * _pow_recursion -returns value of x raised to y
 *@x: the base
 *@y: the exponent
 *
 * Return: value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	int mult;
	int result;

	if (y == 0)
	{
	result = 1;
	}
	else if (y < 0)
	{
	result = -1;
	}
	else if (y == 1)
	{
	result = x;
	}
	else if (y > 1)
	{
	mult = (x * _pow_recursion(x, y - 1));
	result = mult;
	}
	return (result);
}
