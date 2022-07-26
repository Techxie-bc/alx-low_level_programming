#include "main.h"
#include <stdlib.h>
/**
* _strdup - creates a pointer to a newly
* allocated space in memory
* @str: the string to be copied
* Return: 0 or NULL
*/
char *_strdup(char *str)
{
char *copy;
int index, len = 0;
if (str == NULL)
return (NULL);
for (index = 0; str[index]; index++)
len++;
copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);
for (index = 0; str[index]; index++)
copy[index] = str[index];
copy[len] = '\0';
return (duplicate);
}
