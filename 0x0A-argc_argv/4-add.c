#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  program that adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, add = 0;
	char *e;

	if (argc > 1)
	{
		for (i =  1; i < argc; i++)
		{
			e = argv[i];
			
			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{

					printf("Error\n");
					return (1);
				}
			}
			add += atoi(e);
			e++;
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
