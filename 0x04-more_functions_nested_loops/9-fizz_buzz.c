#include <stdio.h>

/**
* main-from 1 to 100 if the number multiples of three print Fizz
* if the number multiples of five print buzz
* if the number multiples of both three and five print FizzBuzz
* else print the number
* followed by a new line
* Return: Always 0
*/
int main(void)
{
	int num;

	for (num = 1; num  <= 100; num++)
	{
		if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	putchar('\n');
	return (0);
}
