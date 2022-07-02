#include <stdio.h>
#include <stdlib.h>

/**
* main - print hexadecimals in
* lowercase
*
* Return: Always (0)
*/
int main(void)
{
int num;
char hexlet;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (hexlet = 'a'; hexlet <= 'f'; hexlet++)
putchar(hexlet);
putchar('\n');
return (0);
}

