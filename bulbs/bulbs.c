#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
  //get string
  string message;
  message = get_string ("Message: ");
  for (int i = 0, n = strlen(message); i < n; i++)
  {  int r,q;
  












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