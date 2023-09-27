#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a;
    do
    {
     a = get_int("Height: ");

    }

    while (a > 1 && a < 8);

    for (int i =0; i<a; i++)
    {
        printf("x");
    }

}