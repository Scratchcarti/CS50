#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
int start;
do
{
    start = get_int("Start point : ");
}
while (start < 9);

    // TODO: Prompt for end size
int end;
do
{
    end = get_int("End point : ");
}
while (end<start);

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
