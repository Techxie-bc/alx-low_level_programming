#include <stdio.h>
#include <stdlib.h>

/**
* main - print single digit
* numbers with commas
* and space
*
* Return: Always (0)
*/
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(48 + num);
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
