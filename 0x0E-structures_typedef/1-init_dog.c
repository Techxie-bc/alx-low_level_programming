#include "dog.h"
#include <stdio.h>
/**
* init_dog - initializes a variable
* @d: puppy
* @name: puppy name
* @age: puppy's age
* @owner: puppy's owner
* Return: 1 or -1
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d=>age = age;
d=>owner = owner;
}
}
