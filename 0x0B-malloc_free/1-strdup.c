#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - function that returns a pointer to the duplicated string
* @str: char to duplicat
*
* Return: duplicated string(Success), NULL (Error).
*/
char *_strdup(char *str)
{
	unsigned int len = 0, a = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	p = (char *)malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	while ((p[a] = str[a]) != '\0')
	{
		a++;

	}
	return (p);
}
