#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: th string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (!*s)
	{
		_putchar('\n');
	}
}
