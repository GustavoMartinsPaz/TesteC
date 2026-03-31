#include<stdio.h>

int main(void){

    int escolha;
    float km, ms;

    printf("escolha o que fazer\n");
    printf("[1] Km/h -> m/s\n");
    printf("[2] m/s -> Km/h\n");
    printf("Qual? "); scanf("%d", &escolha);

    if(escolha == 1){
        printf("Valor: "); scanf("%f", &km);
        printf("De %.2fKm/h para %.2fm/s\n", km, (km / 3.6));
    } else if(escolha == 2){
        printf("Valor: "); scanf("%f", &ms);
        printf("De %.2fm/s para %.2fKm/h\n", ms, (ms * 3.6));
    } else{
    
    printf("Resposta inválida!\n");
    }

    return 0;
}