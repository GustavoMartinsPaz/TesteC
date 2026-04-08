#include<stdio.h>

int main(void){
    int a = 10;
    int b = a++;
    int c = a;
    a++;
    printf("%d %d %d\n", a, b, c);
}