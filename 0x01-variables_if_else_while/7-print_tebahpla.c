#include <stdio.h>
#include <stdlib.h>

/**
* main - print lowercase alphabets
* in reverse
*
* Return: Always (0)
*/
int main(void)
{
char reve;
for (reve = 'z'; reve >= 'a'; reve--)
putchar(reve);
putchar('\n');
return (0);
}
