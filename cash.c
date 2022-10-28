#include <cs50.h>
#include <math.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}




int get_cents(void)
{
    int answer;
    do
    {
        answer = get_int("Change owed: ");
    }
    // TODO
    while (answer < 0);

    return answer;
}

int calculate_quarters(int cents)
{
    // TODO
    if (cents >= 25)
    {
        int q;
        q = ((cents - (cents % 25)) / 25);
        return q;
    }

    else
    {
        return 0;
    }
}

int calculate_dimes(int cents)
{
    // TODO
    if (cents >= 10)
    {
        int d;
        d = ((cents - (cents % 10)) / 10);
        return d;
    }

    else
    {
        return 0;
    }
}

int calculate_nickels(int cents)
{
    // TODO
    if (cents >= 5)
    {
        int n;
        n = ((cents - (cents % 5)) / 5);
        return n;
    }

    else
    {
        return 0;
    }
}

int calculate_pennies(int cents)
{
    // TODO
    if (cents >= 1)
    {
        int p;
        p = cents;
        return p;
    }

    else
    {
        return 0;
    }
}
