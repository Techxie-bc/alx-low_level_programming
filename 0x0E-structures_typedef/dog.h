#ifndef STRUCTS
#define STRUCTS

/**
* struct dog - description of
* a puppy
* @name: puppy name
* @age: puppy age
* @owner: owner of puppy
*
* Description: Longer description
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} my_dog;
#endif

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
