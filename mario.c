#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n, i, a, b;
    
    do
    {
        printf("Height: ");
        n = GetInt();
    }
    while (n < 0 || n > 23);

    for (i = 0; i < n; i++)
    {
        for (a = 0; a < n-i-1; a++)
            printf(" ");
        for (b = 0; b < i+2; b++)
            printf("#");
        printf("\n");
    }
}