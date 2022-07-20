#include "main.h"
int find_strlen(char *s);
int c_palin(char *s, int len, int index);
int is_palin(char *s);
/**
* find_strlen - return the length of a
* string
* @s: string
* Return: length of s
*/
int find_strlen(char *s)
{
int len = 0;
if (*(s + len))
{
len++;
len += find_strlen(s + len);
}

/**
* c_palin - check if a string is
* a palindrome
* @s: string to be checked
* @len: length of string
* @index: index of s
* Return: 0 or -1
*/
int c_palin(char *s, int len, int index)
{
if (s[index] == s[len / 2])
return (1);
if (s[index] == s[len - index - 1])
return (c_palin(s, len, index + 1));
return (0);
}

/**
* is_palin - checks if a string
* is a palindrome.
* @s: string to be checked
* Return: 0 or 1
*/
int is_palin(char *s)
{
int index = 0;
int len = find_strlen(s);
if (!(*s))
return (1);
return (c_palin(s, len, index));
}
