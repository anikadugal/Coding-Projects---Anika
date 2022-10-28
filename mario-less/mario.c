#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    //Prompt user for height
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);


    //Print the rows
    for (int i = 0; i < n; i++)
    {
        //Print the spaces
        for (int s = 1; s < (n - i); s++)
        {
            printf(" ");
        }

        //Print the columns
        for (int j = -1; j < i; j++)
        {

            //Print the hash signs
            printf("#");
        }
        //Move to the next line
        printf("\n");
    }
}