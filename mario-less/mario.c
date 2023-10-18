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
    for (int j = 0; j < a; j++)
    {
      printf("#");

    }
    printf("#");
     printf("\n");

}
}