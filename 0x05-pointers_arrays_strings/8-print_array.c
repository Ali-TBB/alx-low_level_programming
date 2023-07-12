#include <stdio.h>
/**
* print_array-print all elements of array
* @a: array
* @n: number of element
* followed by new line
*/
void print_array(int *a, int n)
{
	int b;

	for (b = 0; n >= 0; n--, b++)
	{
		printf(%d ,a[b]);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
