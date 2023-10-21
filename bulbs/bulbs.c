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
  for (int i = n, n = strlen(message); i =< 0 ; i--)
  {
    int r,q;
    q = message[i];















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