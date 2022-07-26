#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars
* @size: the size of the array
* to be initiated
* @c: the specific char to initiate
* the array with
* Return: 0 or NULL
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int index;
if (size == 0)
return (NULL);
arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);
for (index = 0; index < size; index++)
arr[index] = c;
return (arr);
}
