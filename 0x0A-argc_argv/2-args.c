#include <stdlib.h>
#include <stdio.h>
/**
* main - printn the arguments
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
