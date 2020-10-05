/**
* _memset - function that fills memory with a constant byte
* @s: the pointer
* @b: byte to be filled
* @n: the first no of bytes to be filled
*
* Return: pointer to memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **p;

	p = &s;
	for (i = 0; i < n ; i++)
	{
	s[i] = b;
	}
	return (*p);
}
