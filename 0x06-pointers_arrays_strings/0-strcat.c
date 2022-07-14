#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strcat - concatenates two
* strings
* @dest: string 1
* @src: string
* Return: string
*/
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
