#include "main.h"
#include <string.h>
/**
* _strstr - Locates a substring
* @haystack: string to be searched.
* @needle: substring to be located.
* Return: pointer or NULL
*/
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
