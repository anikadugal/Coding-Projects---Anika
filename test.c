#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int cents = get_int("Cents: ");

    if (cents >= 25)

    {
    int b;
    b = ((cents - (cents % 25))/25);
    printf("%i\n", b);
    }

    else
    {
        printf("0\n");
    }
}
