#include <stdio.h>

/**
* main-multiples numbers of 3 or 5 bellow 1024
* followed by a new line
* Return: Always 0
*/
int main(void)
{
	int result = 0, num;

	for (num = 1024; num >= 0; num--)
		if (num % 3 == 0)
			result += num;
		else if (num % 5 == 0)
			result += num;
	return (result);
}
