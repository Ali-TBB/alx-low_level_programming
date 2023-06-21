#include <stdio.h>

/**
* main- print the first 50 Fibonacci numbers
* followed by a space ,
* Return: Always 0
*/
int main(void)
{
	int num = 0;
	unsigned long  fib1 = 0, fib2 = 2, sum;

	while (num < 50)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (num == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		num += 1
	}
	return (0);
}
