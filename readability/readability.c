#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);
int main(void)
{
    // To get a string of chars

    string text = get_string("Text: ");


    // To count the number of letters in a string
    int letters = count_letters(text);

}

int count_letters(string text)
{
    for (i=0, n = strlen(text); i<n; i++ )
    {  if (text[i])
        {

        }
    }
}