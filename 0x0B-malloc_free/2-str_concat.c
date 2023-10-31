#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - function that concatenates two strings.
* @s1: string 1
* @s2: string 2
* Return: concated string(Success), NULL (Error).
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, len, i;
	char *strcont;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	len = len1 + len2;
	strcont = (char *)malloc(sizeof(char) * (len + 1));
	if (strcont == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (i < len1)
		strcont[i] = s1[i];
		else
		strcont[i] = s2[i];
	}
	return (strcont);
}
