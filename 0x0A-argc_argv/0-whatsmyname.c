#include <stdio.h>

/**
 * main - Print a programe name, followed by anew line.
 * @argc: The number of arguments supplied to the programe.
 * @argv: An array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
