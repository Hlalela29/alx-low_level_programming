#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: int/length of a string
 */
int_strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
