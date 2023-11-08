#include <stdio.h>
int main (void)
{   int a,b,c;
    char gang;
    scanf("%c %d %d", &gang, &a, &b );

    switch (gang)
    {
        case '+': c = a + b; printf("Result = %d\n", c);break;
        case '-': c = a - b; printf("Result = %d\n", c);break;
        case '*': c = a * b; printf("Result = %d\n", c);break;
        case '/': c = a / b; printf("Result = %d\n", c);break;
        case '%': c = a % b; printf("Result = %d\n", c);break;
        default : printf("invalid arithematic operation\n");break;
    }













}