#include <stdlib.h>
/**
 * malloc_checked - returns pointer to assigned memory
 * @b: argument to malloc
 * Return: exit status value is set to 98
 */
void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);
	if (m == 0)
		exit(98);
	return (m);
}
