#include "main.h"

/**
* _isalpha - checks if c is an alphabet
* either upper or lowercase
* @c: the character to be checked
*
* Return: 1 if c is a letter
* otherwise return 0
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'Z')
return (1);
else
return (0);
}
