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
for (nletter = 'a'; nletter <= 'z'; nletter++)
putchar(nletter);
for (nletter = 'A'; nletter <= 'Z'; nletter++)
putchar(nletter);
putchar('\n');
return (0);
}
