#include "main.h"
#include "stdio.h"

/**
 * main - prints the number of args passed 
 * @argc: counts argumens
 * @argv: argument vector array
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
