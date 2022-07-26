#include "main.h"
#include <stdlib.h>
/**
* str_concat - function that concatenates
* two strings
* @s1: first string to be concatenated
* @s2: second string to be concatenated
* Return: pointer or NULL
*/
char *str_concat(char *s1, char *s2)
{
char *cat_str;
int index, cat_index = 0, len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (index = 0; s1[index] || s2[index]; index++)
len++;
cat_str = malloc(sizeof(char) * len);
if (cat_str == NULL)
return (NULL);
for (index = 0; s1[index]; index++)
cat_str[cat_index++] = s1[index];
for (index = 0; s2[index]; index++)
cat_str[cat_index++] = s2[index];
return (cat_str);
}
