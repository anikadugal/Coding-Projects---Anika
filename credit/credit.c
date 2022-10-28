#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Prompt user for input
    long i;
    do
    {
        i = get_long("Number: ");
    }
    while ( i < 1 || i > 1000000000000000 || i < 1000000000000)  ;

    //Identify every other nuber
    long place1, place2, place3, place4, place5;
    place1 = round(i % 10)*2;
    place2 = round((i % 1000)/100)*2;
    place3 = round((i % 100000)/10000)*2;


    printf("Test = %li\n", place1);
    printf("%li\n", place2);
    printf("%li\n", place3);
}


