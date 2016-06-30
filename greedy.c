#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    long long cents, quarter, dime, nickel, penny, coins;
    
    /* prompt user for amount of change */
    printf("O hai! ");
    
    do
    {
        printf("How much change is owed?\n");
        n = GetFloat();
    }
    while (n <= 0);
    
    /* round the dollars */
    cents = round(n*100);

    /* greedy algorithm */
    quarter =  0; dime = 0; nickel = 0; penny = 0;
    
    if (cents >= 25)
    {
        quarter = cents / 25;
        cents = cents % 25;
    }

    if (cents >= 10)
    {
        dime = cents / 10;
        cents = cents % 10;
    }

    if (cents >= 5)
    {
        nickel = cents / 5;
        cents = cents % 5;
    }
    
    if (cents >= 1)
    {
        penny = cents;
    }
    
    coins = quarter + dime + nickel + penny;
    printf("%lld\n", coins);
}