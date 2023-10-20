#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    // To get a string of chars

    string text = get_string("Text: ");

    int letters = count_letters(text);

    int words = count_words(text);

    int sentences = count_sentences(text);

    printf ("%i", sentences);


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
    for (int i= 0, n = strlen(text); i < n; i++)
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

   for (int i=0, n < strlen(text); i < n; i++ )
   {
        if (text[i] == 33 || 63 || 46  )

            {
                S = S + 1;

            }
          else {
            S = S+0;
          }
   }
   return S;
}


