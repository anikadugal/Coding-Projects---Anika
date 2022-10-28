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
            //Print a brick
            printf("#");
        }

        //Print the gap
        printf("  ");

        for (int r = -1; r < i; r++)
        {
            printf("#");
        }


        //Move to next row
        printf("\n");
    }

}

