#include "main.h"
#include <stdio.h>
/**
* rev_string - function that reverses
* a string
* @s: character param
* Return: Always 0.
*/
void rev_string(char *s)
{
int i, j;
char temp[500];
for (i = 0; *s != '\0'; i++)
{
temp[i] = *s;
s++;
}
s--;
for (j = 0; j != i; j++)
{
*s = temp[j];
s--;
}
s++;
}
