#include <stdlib.h>
/**
 * argstostr- concatenates all the arguments of a program
 * @ac: pointer to the 2D array
 * @av: height of the array
 *
 * Return: pointer to allocated memory
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	char *ptr1;
	int m;
	int k;
	int n;
	int b;
	int p;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (n = 0; n < ac; n++)
	{
		b = 0;
		while (av[n][b] != '\0')
		{
			b++;
			p++;
		}
		p++;
	}
	p += 1;
	ptr = malloc(p * sizeof(char));
	if (ptr == NULL)
	return (NULL);
	ptr1 =  ptr;
	for (m = 0; m < ac; m++)
	{
		k = 0;
		while (av[m][k] != '\0')
		{
			*ptr = av[m][k];
			k++;
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	return (ptr1);
}

