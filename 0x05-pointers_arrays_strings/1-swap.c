#include "main.h"
#include <stdio.h>
/**
* swap_int - swap the values
* of two integers
* @a: param 1
* @b: param 2
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
