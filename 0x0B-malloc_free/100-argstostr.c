#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: the number of  arguments
 * @av: the  arguments
 * Return: void.
 */
char *argstostr(int ac, char **av)
{
	int i, len = 0, a, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		a = 0;
		while (av[i][a])
		{
			len++;
			a++;
		}

	}

	len += (ac + 1);
	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		a = 0;
		while (av[i][a])
		{

			str[k] = av[i][a];
			a++;
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';
	return (str);

}

