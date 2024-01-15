#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int printf(const char *format, ...)
{
    write(1,"27 36 1 45 4 - 9\n", 18);
    write(1, "Congratulations, you win the Jackpot!\n", 38);
    exit(EXIT_SUCCESS);
}
