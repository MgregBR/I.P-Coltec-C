#include <stdio.h>
#define SUCESSO 0

// LER IDADE VERIFICAÇÕ MAIORIDADE

int main(int argc,char ** argv) {
    int idade;
    int maiorIdade;
    maiorIdade = 18;

    printf("\nOla digite sua idade: ");
    scanf("%d",&idade);
    
    if (idade<maiorIdade){
        printf("\nParabens!!! você já é maior de idade!!");
    } else{
        printf("\nInfelizmente!!! você é menor de idade!!");
    }
    return SUCESSO;
}