#include <math.h>
#include <stdlib.h>
#include <stdio.h>
/**
* main - print number of arguments
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
