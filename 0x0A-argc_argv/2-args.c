#include <stdio.h>

/**
* main - prints all arguments including
* the name
* @argc: argument count
* @argv: array to be counted
* Return: Always (0)
*/
int main(int argc, char *argv[])
{
int i;
if (argc >= 1)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
