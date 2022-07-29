#include "main.h"

/**
* malloc_checked - allocates
* memory using malloc
* @b: int to be given
* Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
void *point = malloc(b);
if (point == NULL)
{
exit(98);
}
return (point);
}
