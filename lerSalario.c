#include <stdio.h>
#define SUCESSO 0
#define SALARIO_MIN 1302.00


// LER SALARIO E ANALISE DE VUNERABILIDADE

int main(int argc,char ** argv) {
    float salario;
    float rendPC;
    int qtdfamilia;

    printf("\nOla digite sua renda mensal: ");
    scanf("%f",&salario);

    printf("\nOla digite quantidade de pessoas na sua casa: ");
    scanf("%d",&qtdfamilia);
    
    rendPC=salario/SALARIO_MIN;

    if((rendPC/qtdfamilia) < 1) {
        printf("situação de vunerabilidade");
    } else {
        printf("fora de situação de vunerabilidade");
    }

    printf("\n");

    return SUCESSO;
}