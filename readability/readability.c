#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
float index;
int main(void)
{
   // To get a string of chars

    string text = get_string("Text: ");

// To get main numbers

    float letters = count_letters(text);

    float words = count_words(text);

    float sentences = count_sentences(text);

// Now to grade

index = (5.88 * ((letters)/(words))) - (29.6 * ((sentences)/(words))) - (15.8);

int g = round(index);

// final straw

if (g > 16)
{
    printf ("Grade 16+\n");
}
else if (g < 1)
{
    printf ("Before Grade 1\n");
}
else
{
    printf("Grade %i\n", g);

}















}


// To count the number of letters in a string.

   int count_letters(string text)

{  int L = 0;
    for (int i = 0, n = strlen(text); i < n; i++ )
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

// To count the number of words in a string.

    int count_words(string text)

{
    int W = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            W = W + 1;
        }
        else
        {
            W = W + 0;
        }

    }

    W = W + 1;
    return W;
}

// To count the number of sentences in a string.

   int count_sentences(string text)
{
    int S = 0;

   for (int i=0, n = strlen(text); i < n; i++ )
   {
        if (text[i] == (46))

        {
            S = S + 1;

        }
        else if (text[i] == (63))

        {
            S = S + 1;

        }
        else if (text[i] == (33))

        {
            S = S + 1;

        }

          else
          {
            S = S+0;
          }
   }
   return S;
}

