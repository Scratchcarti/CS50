#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a;

    do
    {
     a = get_int("Height: ");
    }
    while (a > 8 || a < 1);

  for (int i = 0; i < a; i++)
  {
    for (int s = 0; s < a - i - 1; s++)
    {
      printf(" ");
    }
      for (int j = 0; j <=i; j++)
      {
          printf("#");
      }
  }

}