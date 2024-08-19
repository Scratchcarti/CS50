#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Promt for start size
    int start;
    do
    {
        start = get_int("Start size: ");

    }
    while (start<9);

    //Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    //Keep track of number of years
    int years = 0;

    //Updating no of years
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;

    }
    //printing finale
    printf("Years: %i\n", years);
}