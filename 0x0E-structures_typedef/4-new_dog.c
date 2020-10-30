#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a ew instance of dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name1;
	char *owner1;
	int i;
	int j;
	int len;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (len = 0; name[len] != '\0'; len++)
	{
	}
	name1 = malloc(sizeof(len + 1));
	for (i = 0; name[i] != '\0'; i++)
	{
		name1[i] = name[i];
	}
	name1[i] = '\0';
	for (len = 0; owner[len] != '\0'; len++)
	{
	}
	owner1 = malloc(sizeof(len + 1));
	for (j = 0; owner[j] != '\0'; j++)
	{
		owner1[j] = owner[j];
	}
	owner1[j] = '\0';
	if (name1 == NULL || owner1 == NULL)
	{
		return (NULL);
	}
	new_dog->name = name1;
	new_dog->age = age;
	new_dog->owner = owner1;
	return (new_dog);
}
