#include "main.h"
/**
* _memcpy - copies memory area
* @dest: string
* @src: character
* @n: integer
* Return: string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
dest[a] = src[a];
return (dest);
}
