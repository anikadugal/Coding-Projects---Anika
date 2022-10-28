//Name libraries
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//Breadcrumb for only_digits custom block
bool only_digits(string s);

//Breadcrumb for rotate block
char rotate(char c, int n);
int main(int argc, string argv[])
{
    //If user prinet/nts zero or multiple CLAs
    if (argc < 2 || argc > 2)
    {
        //Print error message
        printf("Usage: ./caesar key\n");
        return 1;
    }

    bool digits = only_digits(argv[1]);
    //If the char aren't all digits
    if (digits == false)
    {
        //Print error message
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: ");
    for (int i = 0, length = strlen(plaintext); i < length; i++)
    {
        int z = rotate(plaintext[i], k);
        printf("%c", z);
    }
    printf("\n");

}



//Details of only_digits block
bool only_digits(string s)
{
    //Create a counter
    int counter = 0;
    //Create a length variable for later comparison
    int length = strlen(s);

    //Create a "for" loop til the end of strlen
    for (int i = 0; i < length; i++)
    {
        int q = isdigit(s[i]);

        //If it's a digit
        if (q > 0)
        {
            counter += 1;
        }


        //If it's not a digit
        else if (q == 0)
        {
            counter += 0;
        }
    }

    if (counter == length)
    {
        return true;
    }
    else
    {
        return false;
    }


}

//Design rotate block
char rotate(char c, int n)
{
    int cipher = 0;
    for (int i = 0; i < c; i++)
        if (isupper(c))
        {
            int alphabet = c - 65;
            int cipher2 = (alphabet + n) % 26;
            cipher = cipher2 + 65;

        }
        else if (islower(c))
        {
            int alphabet = c - 97;
            int cipher2 = (alphabet + n) % 26;
            cipher = cipher2 + 97;

        }

        else
        {
            cipher = c;
        }
    treturn cipher;
}

