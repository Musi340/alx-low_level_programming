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
	dog_t *new_dog;
	char *name1;
	char *owner1;
	int i;
	int j;

	for (i = 0; name[i] != '\0'; i++)
	;
	for (j = 0; owner[j] != '\0'; j++)
	;
	name1 = malloc(i * sizeof(char));
	owner1 = malloc(j * sizeof(char));
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	free(owner1);
	free(name1);
	return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		name1[i] = name[i];
	}
	name1[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
	{
		owner1[j] = owner[j];
	}
	owner1[j] = '\0';
	new_dog->name = name1;
	new_dog->age = age;
	new_dog->owner = owner1;
	return (new_dog);
}
