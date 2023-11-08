#include <stdio.h>
int main (void)
{   int a,num,rem,sum=0;
    scanf("%d", &a);
    while (true)
    {
        num = a % 10;
        sum = sum + num;
        a = a/10;
        if (a ==0)
        {break;}
        

    }
}