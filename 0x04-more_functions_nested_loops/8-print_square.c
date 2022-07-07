#include "main.h"
#include <stdio.h>

/**
* print_square - print
* squares
* @size: size of square
* Return: Always 0
*/
void print_square(int size)
{
int x, y;
if (size > 0)
{
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
