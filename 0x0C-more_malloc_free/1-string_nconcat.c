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
	unsigned int len1 = 0, len2 = 0, len, i, a;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return ("");
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (len2 <= n)
	{
		len = len2 + len1;
	}
	else
	{
		len = len1 + n;
	}
	str = malloc(sizeof(unsigned int) * len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	a = 0;
	while (i < len)
	{
		str[i] = s2[a];
	a++;
	i++;
	}
	str[i] = '\0';
	return (str);
}
