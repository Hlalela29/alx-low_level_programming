#include "main.h"

/**
 * _print_rev_recursion - print a sting in reverse
 * @s: the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
