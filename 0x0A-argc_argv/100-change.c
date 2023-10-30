#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - prints the minimum number of coins
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 if error return 1
*/
int main(int argc, char *argv[])
{
	int num, i = 0, coins = 0, j, tru = 1;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		char *arg = argv[1];

		for (j = 0; arg[j]; j++)
		{
			if (!isdigit(arg[j]) && arg[0] != '-')
				tru = 0;
			break;
		}
	num = atoi(argv[1]);
	}
	if (num <= 0 && tru == 1 && argc == 2)
	{
		printf("0\n");

	}
	else if (num > 0 && tru == 1 && argc == 2)
	{
		while (num  > 0)
		{
			if (num >= arr[i])
			{
				num -= arr[i];
				coins++;
			}
			else
				i++;
		}
		printf("%d\n", coins);
	}
	else if ((argc != 2) || tru == 0)
		printf("Error\n");
	return (0);
}
