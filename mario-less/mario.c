#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a;
    do
    {
     a = get_int("Height: ");
    }
    while (a > 0 && a < 9);

    for (int i =0; i<a; i++)
    {
        printf("x");
    }

}