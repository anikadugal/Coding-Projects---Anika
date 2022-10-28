#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//Breadcrumb for count_letters custom block
float count_letters(string text);
float count_words(string text);
float count_sentences(string text);

int main(void)
{
    //Prompt user for text
    string text = get_string("Text: ");

    //Run count_letters
    float letters2 = count_letters(text);
    //Print # of letters

    float words2 = count_words(text);

    float sentences2 = count_sentences(text);

    float L = ((letters2 / words2) * 100);

    float S = ((sentences2 / words2) * 100);

    float index = ((0.0588 * L) - (0.296 * S) - 15.8);

    int X = round(index);

    if (index >= 1 && index <= 15)
    {
        printf("Grade %i\n", X);
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Grade 16+\n");
    }

}



//Details of custom block count_letters
float count_letters(string text)
{
// Create a counter
    float letters = 0;

    //For loop that runs as long as length of text
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (isalpha(text[i]))
        {
            //If text[i] is an alphabetic character, then count "1"
            letters += 1;
        }

        else
        {
            //Otherwise, count "0"
            letters += 0;
        }
    }
    //Return final amount
    return letters;
}



float count_words(string text)
{
    float words = 1;

    for (int i = 0, length = strlen(text); i < length; i++)

        if (text[i] == ' ')
        {
            words += 1;
        }

        else
        {
            words += 0;
        }
    return words;
}


float count_sentences(string text)
{
    float sentences = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences += 1;
        }
        else
        {
            sentences += 0;
        }
    }
    return sentences;
}