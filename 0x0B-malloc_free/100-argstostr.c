#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of args passed.
 * @av: array size of ac.
 *
 * Return: pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *nstr;
	int i, j, count = 0, y = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
		count++;
	}
	count++;

	nstr = malloc(count * sizeof(char));

	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			nstr[y++] = av[i][j];
		}
		nstr[y] = '\n';
		y++;
	}
	nstr[y] = '\0';
	return (nstr);
}
