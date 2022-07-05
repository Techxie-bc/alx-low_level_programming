#include "main.h"

/**
* print_last_digit - prints
* the last digit of an int
*
* @n: integer to be computed
* Return: on Success 1, 0 on error
*/
int print_last_digit(int n)
{
int last_d = n % 10;
if (last_d < 0)
last_digit *= -1;
_putchar(last_d + '0');
return (last_d);
}
