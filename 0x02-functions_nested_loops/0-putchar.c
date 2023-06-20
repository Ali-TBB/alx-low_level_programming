#include <stdio.h>

/**
* main-print putchar
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int n;

	for (n = 0; n < 8 ; n++)
		putchar(str[n]);
	putchar('\n');
	return (0);
}
