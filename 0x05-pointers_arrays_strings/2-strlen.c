#include "main.h"
#include <stdio.h>
/**
* _strlen - returns the length
* of a string
* @s: character to be checked
* Return: Return length of the string
*/
int _strlen(char *s)
{
int len;
for (len = 0; *s != '\0'; len++)
{
s++;
}
return (len);
}
