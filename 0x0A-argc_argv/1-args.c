#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 success
 */
int main(int argc, char **argv)
{
	if (*argv[0] > 0)
		printf("%i\n", argc - 1);
	return (0);
}
