#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints letters excluding
* q and e
*
* Return: Always 0
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}
putchar('\n');
return (0);
}
