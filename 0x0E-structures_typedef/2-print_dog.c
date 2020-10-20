#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints elements of struct dog
 * @d: variable of struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
	if (((*d).name) == 0)
	{
		printf("Name: (nil)");
	}
	if (((*d).age) == 0)
	{
		printf("Name: (nil)");
	}
	if (((*d).owner) == 0)
	{
		printf("Name: (nil)");
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
	}
}
