#include<stdio.h>

int main(void){

    int idade;
    float altura;
    double peso;
    char inicial;

    printf("Digite sua idade: "); scanf("%d", &idade);
    printf("Digite sua altura: "); scanf("%f", &altura);
    printf("Digite seu peso: "); scanf("%lf", &peso);
    printf("Digite a inicial do seu nome: "); scanf(" %c", &inicial);

    printf("\n=== DADOS LIDOS ===\n");
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2lf\n", peso);
    printf("Inicial: %c\n", inicial);


    return 0;
}