#include "main.h"

/**
* _strchr - locates a character
* in a string
* @s: string
* @c: character
* Return: pointer or null
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\n')
return (s);
return (NULL);
}
