#include "dog.h"
/**
 * init_dog- initializes variable of struct dog
 * struct dog *d- defines elements of dog d
 * @d: variable of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
if (d != 0)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}

