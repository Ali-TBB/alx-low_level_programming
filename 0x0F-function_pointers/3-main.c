#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - returns the sum of a and b
 *
 * @ac: number of arge.
 * @av: arges.
 * Return: Always (0).
 */
int main(int ac, char **av)
{
	int (*opr)(int, int);


	if (ac == 4)
	{
		opr = get_op_func(av[2]);
		if (!opr)
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n ");
		exit(98);
	}
	printf("%d\n", opr(atoi(av[1]), atoi(av[3])));
	return (0);
}
