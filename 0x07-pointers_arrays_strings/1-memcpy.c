/**
* _memcpy - function that copies memory area
* @dest: memory area to be copied to
* @src: memory area to be copied from
* @n: number of bytes to be copied fron src
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char **p;

	p = &dest;
	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (*p);
}
