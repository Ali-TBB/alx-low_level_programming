#include <stdio.h>

/**
* _strlen - retur length of a string
* @s: cahr
* Return: length
*/
int _strlen(char *s)
{
	int legth;
	char a = *s;

	for(legth = 0; a[legth] != '\0'; legth++);

	return (legth);
}
