#include <stdio.h>
#include <stdbool.h>
#define SUCESSO 0

int main(int argc,char ** argv) {
    char opcao;
    bool executar;
    char operador;
    float a, b, resultado;

    printf("\nVoce deseja executar o problema: [S ou N]");
    scanf("%c",&opcao);
    executar=(opcao=='S'||opcao=='s');
    if(executar){
        printf("\nDigite o valor das variaveis 'a' e 'b': ");
        scanf("%f %f", &a, &b);
        printf("\nDigite o operador desejado: ['+' ; '-'; '*'; '/']");
        scanf(" %c", &operador);
        switch (operador)
        {
        case '+':
        resultado= (a + b);
        printf("\nO resultado eh: '%f'\n",resultado);
            break;
        case '-':
        resultado= (a - b);
        printf("\nO resultado eh: '%f'\n",resultado);
            break;        
        case '*':
        resultado= (a * b);
        printf("\nO resultado eh: '%f'\n",resultado);
            break;
        case '/':
        resultado= (a / b);
        printf("\nO resultado eh: '%f'\n",resultado);
            break;
        
        default:
        printf("\nO operador nao foi identificado\n");
            break;
        }
    } else{
        printf("\nPrograma nao executado\n");
    }
    return SUCESSO;
}
