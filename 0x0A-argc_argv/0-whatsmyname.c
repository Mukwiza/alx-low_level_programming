#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print its name
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
