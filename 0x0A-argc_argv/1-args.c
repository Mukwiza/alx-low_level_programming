#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints argc
 * @argc: arguments that counts number of arguments passed into it
 * @argv: pointer to array of size argc
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
