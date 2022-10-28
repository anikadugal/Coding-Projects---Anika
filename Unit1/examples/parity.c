//If n is "even"
//Else print "odd"
//See if n % 2 is 0, it's even
//If n%2 is 1, it's odd

#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n = get_int("n: ");

    if(n % 2 == 0)
    {
        printf("even\n");
    }

    if(n % 2 == 1)
    {
        printf("odd\n");
    }
}
