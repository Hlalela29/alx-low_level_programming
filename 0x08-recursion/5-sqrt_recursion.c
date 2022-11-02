#include "main.h"

/**
 * find_root - increases i to find sqrt
 * @i: starts at 1
 * @n: the number
 * Return: i, i + 1, or -1
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (find_root(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - finds sqrt
 * @n: the number
 *
 * Return: -1, 0, or sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 2));
}
