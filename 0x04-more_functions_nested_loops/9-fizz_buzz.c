#include <stdio.h>

/**
* main - prints 1 - 100
* fizz buzz
*
* Return: Always 0
*/
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 || x % 5 == 0)
printf("FizzBuzz");
{
if (x % 3 == 0)
{
printf("Fizz");
}
if (x % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", x);
}
if (x != 0)
{
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
