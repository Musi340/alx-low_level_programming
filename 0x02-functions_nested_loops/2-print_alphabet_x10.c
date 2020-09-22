#include "holberton.h"
/**
 *main - check the code for Holberton School students.
 * print_alphabet_x10 - prints alphabet ten timesin lowercase
 *Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
 * print_alphabet_x10 - prints alphabet ten timesin lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
{
	for (j = 'a'; j <= 'z'; j++)
{
	_putchar(j);
}
	_putchar('\n');
}
}
