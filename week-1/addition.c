#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // numbers until 2 billion -> 4 billin total
    // int x = get_int("x: ");
    // int y = get_int("y: ");
    // printf("A soma é: %i\n", x + y);

    // so don't addition 2 billion + 2 billion, because don't fit in bits

    // numbers until 10 billins
    long x = get_long("x: ");
    long y = get_long("y: ");
    printf("%li\n", x + y);
}