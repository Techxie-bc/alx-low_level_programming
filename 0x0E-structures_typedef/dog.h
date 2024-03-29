#ifndef DOG_H
#define DOG_H

/**
* struct dog - description of
* a puppy
* @name: puppy name
* @age: puppy age
* @owner: owner of puppy
*
* Description: Longer description
*/
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

