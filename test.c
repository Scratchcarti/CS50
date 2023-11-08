#include <stdio.h>
int main (void)
{
    int a,b,c,r=0,k;
scanf("%i", &a);
k = a;
for (;;)
{ b = a % 10;
 r = r * 10 + b;
a = a/10;

  if (a == 0)
  {break;}

}

if (r == k)
{
    printf("issa palindrome\n");

}
else
{
    printf("is your retarded?\n");
}










}