#include "main.h"

/**
* find_strlen - return the length of a
* string
* @a: string
* @l: integer to count length
* Return: length of s
*/
int find_strlen(char *a, int l)
{
if (*a == 0)
return (l - 1);
return (find_strlen(a + 1, l + 1));
}

/**
* check_palindrome - check if a string is
* a palindrome
* @a: string to be checked
* @l: length of string
* Return: 0 or -1
*/
int check_palindrome(char *a, int l)
{
if (*a != *(a + l))
return (0);
else if (*a == 0)
return (1);
return (check_palindrome(a + 1, l - 2));
}

/**
* is_palindrome - checks if a string
* is a palindrome.
* @s: string to be checked
* Return: 0 or 1
*/
int is_palindrome(char *s)
{
int l;
l = find_strlen(s, 0);
return (check_palindrome(s, l));
}
