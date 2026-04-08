#include<stdio.h>

int main(void){
    int v[3] = {2, 4, 6};
    v[1] = 10;
    printf("%d\n", v[1]);
    return 0;
}