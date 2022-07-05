#include "main.h"
/**
* print_alphabet_x10 - to print
* alphabets 10x
*/
void print_alphabet_x10(void)
{
char n;
int count = 0;
while (count++ <= 9)
{
for (n = 'a'; n <= 'z'; n++)
_putchar(n);
_putchar('\n');
}
}
