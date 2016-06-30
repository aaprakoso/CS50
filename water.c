#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a, b;
    printf("minutes: ");
    a = GetInt();
    b = a * 1.5 * 128 / 16;
    printf("bottles: %d\n", b);
}