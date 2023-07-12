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

	for (b = 0; b <= n; b++)
	{
		if (b != (n - 1))
			printf("%d, ", a[b]);
		else
			printf("%d", a[d])
	}
	putchar('\n');
}
