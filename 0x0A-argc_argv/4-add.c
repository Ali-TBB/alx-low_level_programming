#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - printn the sum of arguments
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 if error return 1
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, j, sum = 0;

	if (argc < 2)
		{
		printf("0\n");
		return (0);
		}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j]; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
