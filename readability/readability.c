#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int L;
int count_letters(string text);
int main(void)
{

    // To get a string of chars

    string text = get_string("Text: ");


    // To count the number of letters in a string
    int letters = count_letters(text);
    printf("%i", letters);
}

int count_letters(string text)
{  L=0;
    for (int i=0; n = strlen(text); i<n; i++ )
    {  if (isalpha(text[i]))
        {
          L = L+1;
        }
      else
      {
        L = L+0;
       }
    }
  return L;


}