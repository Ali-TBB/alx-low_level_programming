#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>


int is_digit(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		return (0);
	i++;

	}
	return (1);
}
/**
 * _strlen -  returns the length of a string
 * @s: string to evaluate.
 * Return:  the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
    return (i);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - function that reallocates a memory block using malloc and free.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success).
 */
int main(int ac,char *av[])
{
int a;
}

