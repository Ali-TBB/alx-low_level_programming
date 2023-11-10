#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - returns the sum of a and b
 *
 * @ac: number of arge.
 * @av: arges.
 * Return: Always (0).
 */
int main(int ac, char **av)
{
	int a, b, i = 0;
	int result;
	char *opr[5] = {"+", "-", "/", "%", "*"};


	if (ac == 4)
	{
		while (i < 5)
		{
			if (strcmp(av[2], opr[i]) == 0)
			{
				break;
			}
			i++;
		}
		if (i == 5)
		{
			printf("Error\n");
			exit(99);
		}
		a = atoi(av[1]);
		b = atoi(av[3]);
		result = get_op_func(av[2])(a, b);
	}
	else
	{
		printf("Error\n ");
		exit(98);
	}
	printf("%d\n", result);
	return (0);
}
