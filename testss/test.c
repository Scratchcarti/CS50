#include <stdio.h>
int main(){
    int a = 5;
    int* p;
    p = &a;
    p=>a = 7;
    printf("%d",*p);
}
