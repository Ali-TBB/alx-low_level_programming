#include "main.h"


/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int line, count;

	line = size;
	for (line = 0; line <= size; line++)
	{
		count = size;
		while (count > 0)
		{
			_putchar(35);
			count -= 1;
		}
		_putchar('\n');
	}
}
