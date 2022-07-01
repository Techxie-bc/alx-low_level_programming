#include <stdio.h>
#include <stdlib.h>

/**
* main - Print lower and upper
* case letters
*
* Return: Always 0
*/
int main(void)
{
char nletter;
for (nlettter = 'a'; nletter <= 'z'; nlettter++)
putchar(nletter);
for (nletter = 'A'; nletter <= 'Z'; nletter++)
putchar(nletter);
putchar('\n');
return (0);
}
