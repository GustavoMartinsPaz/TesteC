#include<stdio.h>

int main(void){
    int a, b;
    a = 10;
    a = a + 1;
    b = a;
    printf("a=%d b=%d\n", a, b);

    int c, d;
    c = 10;
    c = c + 1;
    d = c + 1;
    printf("c=%d d=%d\n", c, d);
    return 0;
}