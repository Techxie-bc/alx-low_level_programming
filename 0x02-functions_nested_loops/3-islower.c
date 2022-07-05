#include "main.h"

/**
* _islower - checks if int c
* is uppercase or lowercase
* @c: the character is to be checked
*
* Return: 1 if c is lowercase
* otherwise return 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
