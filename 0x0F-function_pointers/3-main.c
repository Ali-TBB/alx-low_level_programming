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
	int (*oprt)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(av[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(av[1]), atoi(av[3])));
	return (0);
}
