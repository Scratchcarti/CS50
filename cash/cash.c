#include <cs50.h>
#include <stdio.h>
int main(void)
{ int x=10;
float y=5.4;
y=x;
printf("%f\n",y);

x=5;
y=9.6;
x=y;
printf("%d\n",x);

x= (int)y;
printf("%d\n",x);

}