#include <stdio.h>
/**
* main-print numbers
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int num1 = 0, num2;

	while (num1 < 9)
	{
		for (num2 = num1 + 1; num2 <= 9 ; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++num1;
	}
	putchar('\n');
	return (0);
}
