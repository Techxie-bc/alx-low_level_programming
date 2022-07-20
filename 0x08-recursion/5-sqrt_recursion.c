#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
* find_sqrt - finds the natural square root
* @num: int to be given
* @root: root to be tested
* Return: squarerrot or -1
*/
int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);
if (root == num / 2)
return (-1);
return (find_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - returns
* sqaure root of a value
* @n: number
* Return: squareroot of n
*/
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
