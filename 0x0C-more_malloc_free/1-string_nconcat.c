#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of concat string
 * Return: concat string , (NULL) if fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, a = 0;
	char *str;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n < len2)
	{
		str = malloc(sizeof(char) * (len2 + n + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (!str)
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		str[i++] = s2[a++];

	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[a++];
	str[i] = '\0';
	return (str);
}
