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
    while (start<end)
}