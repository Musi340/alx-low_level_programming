#include "holberton.h"
/**
*main-check the code for Holberton School students
*print_alphabet - prints the letters of the alphabet in lowercase
*Return: Always 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints the letters of the alphabet in lowercase
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
{
		_putchar(i);
}
	_putchar('\n');
}
