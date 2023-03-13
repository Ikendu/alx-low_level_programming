#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all arguments
 * @ac: num of argument passed to the progrem
 * @av: array of pointers
 * Return: the new string or the 0 if nothing
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i, j = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);
	
	if (str == NULL)
		return (NULL);
	i = 0;
	
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];

		str[i++] = '\n';
	}
	str[size] = '\0';

	return (str);
}
