#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n<1);

//For each row
    for (int i = 0; i < n; i++)
    {
        //For each column
        for (int j = -1; j < i; j++)
        {
            //Print a brick
            printf("#");
        }
        printf("\n");
    }

}