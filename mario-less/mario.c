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
// now to write actual # rows

  for (int i=0; i<a ; i++)
  {
    for (int j= a-i; j>0; j--)
      {
        printf(".");
      }
      printf("#");
      printf("\n");



  }


}














