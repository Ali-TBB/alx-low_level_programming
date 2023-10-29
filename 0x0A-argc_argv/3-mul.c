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
	int sum = 0, i;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error/n");
		return (1);
	}
	return (0);
}
