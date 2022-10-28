#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //Prompt user to see if they agree
    char r = get_char("Do you agree? ");
    //Check whether user agreed
    if (r == 'y' || r == 'Y')
    {
        printf("agreed\n");
    }
    if(r == 'n' || r == 'N')
    {
        printf("not agreed\n");
    }
}

