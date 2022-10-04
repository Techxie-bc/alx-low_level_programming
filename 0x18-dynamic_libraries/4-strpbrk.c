#include "main.h"
/**
* _strpbrk - searches a string
* for any set of bytes
* @s: string
* @accept: set of bytes
* Return: pointer or NULL
*/
char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
