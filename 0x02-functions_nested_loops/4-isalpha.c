#include "holberton.h"
/**
* main-check the code for Holberton School students.
*
*Return:Always 0.
*/
int _isalpha(int c);
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
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
