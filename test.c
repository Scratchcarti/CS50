#include <stdio.h>
#include <math.h>
int main(void)

{
    int a,b,p=0;
    scanf("%d %d", &a,&b);

    for (int i =0; i < b+1; i++)
    {
        p = p + pow (a, i);

    }

printf("%i\n", p);





















}