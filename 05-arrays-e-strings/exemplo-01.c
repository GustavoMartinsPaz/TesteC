#include<stdio.h>

int main(void){
    int v[5] = {10, 20, 30, 40, 50};

    printf("Valor de v[0]: %d\n", v[0]);
    printf("Valor de v[1]: %d\n", v[1]);
    printf("Valor de v[2]: %d\n", v[2]);
    printf("Valor de v[3]: %d\n", v[3]);
    printf("Valor de v[4]: %d\n", v[4]);

    printf("\n");

    printf("Valor de v[5]: %d\n", v[5]); // Acessando posição fora do limite do array

    printf("\n");

    printf("Endereço de v[0]: %p\n", &v[0]);
    printf("Endereço de v[1]: %p\n", &v[1]);
    printf("Endereço de v[2]: %p\n", &v[2]);
    printf("Endereço de v[3]: %p\n", &v[3]);
    printf("Endereço de v[4]: %p\n", &v[4]);

    return 0;
}