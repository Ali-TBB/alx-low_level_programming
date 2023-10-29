#include <stdlib.h>
#include <stdio.h>
/**
* main - printn the sum of arguments
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 if error return 1
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	if (argc > 2)
	{
		int mul = atoi(argv[1]);

		for (i = 2; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
