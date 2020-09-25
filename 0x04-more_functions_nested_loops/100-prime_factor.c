#include <stdio.h>
/**
* main - prints prime numbers from 1-100
* prints Fizz for multiples of 3
* prints Buzz for multiples of 5
* prints FizzBuzz for multiples of 3 and 5
* Return: returns 0 if successful
*/
int main(void)
{
	int f = 100;
	int n = f / 2;
	int z;
	int i;

	for (i = 2; i <= n; i++)
	{
		z = f / i;
		printf("%d",z);
	}
	return (0);
}
