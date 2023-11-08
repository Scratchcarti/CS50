#include <stdio.h>
int main (void)
{
    int a,b,c,r=0;
scanf("%i", &a);
for (;;)

{ b = a % 10;
 r = r * 10 + b;
a = a/10;

  if (a == 0)
  {break;}

}

if (r == a)
{
    printf("issa palindrome\n");

}
else
{
    printf("is your retarded?\n");
}










}