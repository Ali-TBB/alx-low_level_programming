#include "main.h"

/**
* *string_nconcat-function that concatenates two strings
* @s1:char
* @s2:char
* @n: unsigned int
* Return: return the ponter
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, z;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; x++)
		;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[x]; y++)
		;
	}
	if (y > n)
		y = n;

	str = malloc(sizeof(char) * (x + y + 1));
	if (str == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		str[z] = s1[z];
	for (z = 0; z < y; z++)
		str[z] = s2[z];
	str[x + y] = '\0';
	return (str);
}
