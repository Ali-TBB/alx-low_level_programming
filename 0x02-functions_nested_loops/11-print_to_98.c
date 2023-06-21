#include <stdio.h>

/**
* print_to_98-print all natural numbers from (n) to (98)
* @n: the number begin counting at
* followed by a new line
*/
void print_to_98(int n)
{
	int count;

	if (n < 98)
	{
		for (count = n; count < 98; count++)
		{
			printf("%d, ", count);
		}
	}
	else if (n > 98)
	{
		for (count = n; count > 98; count--)
		{
			printf("%d, ", count);
		}
	}

	printf("%d", n);
	putchar('\n');
}
