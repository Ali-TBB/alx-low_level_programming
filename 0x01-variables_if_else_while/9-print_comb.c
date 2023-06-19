#include <stdio.h>

/**
* main-print single digit numbers separated by ,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');
	return (0);
}
