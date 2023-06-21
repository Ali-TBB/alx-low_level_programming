#include <stdio.h>

/**
* main-print the sum of even-valued Fibonacci sequence
* followed by a new line
* Return: Always 0
*/
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float all_sum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			all_sum += sum;
		}
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", all_sum);
	return (0);
}
