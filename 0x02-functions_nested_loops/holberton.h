
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
}
	_putchar('\n');
}
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
int _islower(int c);

int print_sign(int n)
{
	int result;
if (n < 0)
{	
	_putchar('-');
	result = -1;
}
else if (n > 0)
{	
	_putchar('+');
	result = 1;
}
else
{	
	_putchar('0');
	result = 0;
}
	return result;
}
int _abs(int x)
{
	int result;
if (x < 0)
{	int w;
	w=(-1*x);
	result = w;
}
else
{	
	result = x;
}
	return result;
}
int print_last_digit(int y)
{
	int f;
	int g;
	int result;
	f = y % 10;
	if (f < 0)
	{
	g = -1 * f;
	result = g;
	}
	else if(f == 0)
	{
	result = f;
	} 
	else 
	{
	result = f;
	} 
	return result;
}
void times_table(void)
{
	int i;
	int j;
	int x;
	
	for(i = 48; i <= 57; i++)
{	
	for(j = 48; j <= 57; j++)
{
	x = (i*j);
	_putchar(x);
}
	_putchar('\n');
}
}
int add(int w, int y)
{
	int z;
	int result;
	z = w + y;
	result = z;
	return result;
}	
void print_to_98(int n)
{
	int i;
	int j;
	if (n < 98)
{
	for(i = n; i <= 98; i++)
{
	_putchar(i);
}
}
else if (n > 98)
{
	for(j = n; j >= 98; i--)
{
	_putchar(j);
}
}
else 
{
	_putchar(98);
}
}
int _isalpha(int c)
{
	int result;
	if ((c >= 97 && c<= 122)||(c >= 65 && c<= 90))
{
	result = 1;
}
	else
{
	result = 0;
}
	return result;
}
