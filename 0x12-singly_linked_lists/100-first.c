#include<stdio.h>

/**
 * print_before_Main - print string before main executed
 */
void __attribute__((constructor)) print_before_Main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
