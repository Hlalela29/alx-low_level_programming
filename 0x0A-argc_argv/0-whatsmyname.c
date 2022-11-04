#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 sucess
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
