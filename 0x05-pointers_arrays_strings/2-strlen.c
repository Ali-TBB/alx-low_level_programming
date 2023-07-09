#include <stdio.h>

/**
* _strlen - retur length of a string
* @s: cahr
* Return: length
*/
int _strlen(char *s)
{
	int legth;

	for(legth = 0; *s++; legth++);

	return (legth);
}
