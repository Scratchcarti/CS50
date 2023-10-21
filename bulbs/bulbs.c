#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int byte[8];
int main(void)

{
  // get string
  string message;
  message = get_string ("Message: ");
  // first loop to take in message[] values and process
  for (int i = 0, n = strlen(message); i < n ; i++)
  {
    int r,q;
    q = message[i];

        for (int j = 7; j >= 0; j--)
        {  r = q % 2

        }















  }






















}




void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }



}