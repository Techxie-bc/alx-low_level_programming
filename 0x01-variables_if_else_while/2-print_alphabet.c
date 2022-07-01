#include <stdio.h>
#include <stdlib.h>

/**
* main - prints function that
* dislays lowercase alphabets
*
* Return: Always 0
*/
int main(void)
{
char write;
for (write = 'a'; write <= 'z'; write++)
putchar(write);
putchar('\n');
return (0);
}
