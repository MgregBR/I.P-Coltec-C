/*
*
* @file  List01_COLTEC2023_IntProg
* @brief  Arquivo C com implementação de exercicios
* @author Matheus Gregory Fernandes da Silva
* @date  05/04/2023
*
*/

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#define SUCESSO  0

void ehpar_Impar(void) {

    printf("\n### Verificar se eh Impar ou Par ###");

    int numero;
    bool ehpar;

    printf("\nDigite o valor desejado: ");

    scanf("%d", &numero);
    ehpar = ((numero % 2) == 0);
    if (ehpar) {
        printf("\nO numero %d eh par", numero);
    }
    else {
        printf("\nO numero %d eh impar", numero);
    }

}

void verificação_Sinal(void) {

    printf("\n### Sinal ou numero Nulo ###");

    int numero;
    bool valor_nulo;
    printf("\nDigite o valor numero: ");
    scanf("%d", &numero);
    valor_nulo = (numero == 0);

    if (valor_nulo) {
        printf("\nO numero eh igual a '0'");
    }
    else if (numero >= 0) {
        printf("\nO numero eh positivo");
    }
    else {
        printf("\nO numero eh negativo");
    }

}

void verificar_Divisibilidade(void) {

    printf("\n### Verificar Divisibilidade ###");

    int numero_01;
    int numero_02;
    bool divisivel;

    printf("\nDigite os valores desejados:[denominador] [numerador]");

    scanf("%d %d", &numero_01, &numero_02);
    divisivel = ((numero_02 % numero_01) == 0);
    if (divisivel) {
        printf("\nO numero %d eh divisivel por %d", numero_02, numero_01);
    }
    else {
        printf("\nO numero %d NAO eh divisivel por %d", numero_02, numero_01);
    }

}

void verificar_Multiplo(void) {

    printf("\n### Verificar se eh Multiplo ###");

    int numero_01;
    int numero_02;
    bool multiplo;

    printf("\nDigite os valor desejados: ");

    scanf("%d %d", &numero_01, &numero_02);
    multiplo = ((numero_02 % numero_01) == 0);
    if (multiplo) {
        printf("\nO numero %d eh multiplo por %d", numero_02, numero_01);
    }
    else {
        printf("\nO numero %d NAO eh multiplo por %d", numero_02, numero_01);
    }

}

void mudanca_Base(void) {

    printf("\n### Imprimir em bases Diferentes ###");

    int numero_01;

    printf("\nDigite os valor desejados: ");
    scanf("%x", &numero_01);
    printf("\nO numero %x eh na base 10 eh %d", numero_01);
}

void tabela_verdadeDecimal(void) {

    printf("\n### Verificar tabela verdade base Decimal ###");

    int numero_01;
    int numero_02;
    bool resultado[3];
    printf("\nDigite o valores de numero1 e numero2: ");
    scanf("%d %d", &numero_01, &numero_02);

    resultado[0] = (numero_01 && numero_02);
    resultado[1] = (numero_01 || numero_02);
    resultado[2] = (numero_01 ^ numero_02);

    printf("\n%d AND %d=", numero_01, numero_02, resultado[0]);
    printf("\n%d OR %d=", numero_01, numero_02, resultado[1]);
    printf("\n%d XOR %d=", numero_01, numero_02, resultado[2]);

}

void tabela_verdadeHexadecimal(void) {

    printf("\n### Verificar tabela verdade base Hexadecimal ###");

    int numero_01;
    int numero_02;
    bool resultado[3];
    printf("\nDigite o valores de numero1 e numero2: ");
    scanf("%d %d", &numero_01, &numero_02);

    resultado[0] = (numero_01 && numero_02);
    resultado[1] = (numero_01 || numero_02);
    resultado[2] = (numero_01 ^ numero_02);

    printf("\n%d AND %d=", numero_01, numero_02, resultado[0]);
    printf("\n%d OR %d=", numero_01, numero_02, resultado[1]);
    printf("\n%d XOR %d=", numero_01, numero_02, resultado[2]);

}

void tabela_verdadeHexadecimal_bit_a_bit(void) {

    printf("\n### Verificar tabela verdade base Hexadecimal bit-a-bit ###");

    int numero_01;
    int numero_02;
    bool resultado[3];
    printf("\nDigite o valores de numero1 e numero2: ");
    scanf("%d %d", &numero_01, &numero_02);

    resultado[0] = (numero_01 & numero_02);
    resultado[1] = (numero_01 | numero_02);
    resultado[2] = (numero_01 ^ numero_02);

    printf("\n%d AND %d=", numero_01, numero_02, resultado[0]);
    printf("\n%d OR %d=", numero_01, numero_02, resultado[1]);
    printf("\n%d XOR %d=", numero_01, numero_02, resultado[2]);

}

void tabela_verdadeHexadecimal_16bits(void) {

    printf("\n### Verificar tabela verdade base Hexadecimal < 16 bits ###");

    int numero_01;
    int numero_02;
    bool resultado[3];

    numero_01 = 0xffff + 1;
    numero_02 = 0xffff + 1;

    while (numero_01 > 0xffff && numero_02 > 0xffff) {
        printf("\nDigite o valores de numero1 e numero2: ");
        scanf("%d %d", &numero_01, numero_02);
    }


    resultado[0] = (numero_01 && numero_02);
    resultado[1] = (numero_01 || numero_02);
    resultado[2] = (numero_01 ^ numero_02);

    printf("\n%d AND %d=", numero_01, numero_02, resultado[0]);
    printf("\n%d OR %d=", numero_01, numero_02, resultado[1]);
    printf("\n%d XOR %d=", numero_01, numero_02, resultado[2]);

}

void verificar_Triangulo(void) {

    printf("\n### Verificar se 3 valores inteiros formam um triangulo ###");

    int lado_01;
    int lado_02;
    int lado_03;
    bool triangulo;

    printf("\nDigite os valor desejados: ");

    scanf("%d %d %d", &lado_01, &lado_02, &lado_03);
    triangulo = ((lado_01 + lado_02 > lado_03) && (lado_01 + lado_03 > lado_02) && (lado_03 + lado_02 > lado_01));
    if (triangulo) {
        printf("\nEh possivel formar um triangulo");
    }
    else {
        printf("\nNAO eh possivel formar um triangulo");
    }

}

int main(int argc, char** argv) {
    int indicador;
    char opcao;
    bool executar;

    do {
        printf("\nDigite o numero da questao que deseja executar [1:10]: ");
        scanf("%d", &indicador);
        switch (indicador) {
        case 1: {
            ehpar_Impar();
            break;
        }
        case 2: {
            verificação_Sinal();
            break;
        }
        case 3: {
            verificar_Divisibilidade();
            break;
        }
        case 4: {
            verificar_Multiplo();
            break;
        }
        case 5: {
            mudanca_Base();
            break;
        }
        case 6: {
            tabela_verdadeDecimal();
            break;
        }
        case 7: {
            tabela_verdadeHexadecimal();
            break;
        }
        case 8: {
            tabela_verdadeHexadecimal_16bits();
            break;
        }
        case 9: {
            tabela_verdadeHexadecimal_bit_a_bit();
            break;
        }case 10: {
            verificar_Triangulo();
            break;
        }
        default: {
            printf("\n\n###  ERRO  ###\n\nQuestao não encontrada!!!\n\n");
        }
        }
        printf("\nDeseja executar mais alguma questao? [S ou N]: ");
        scanf(" %c", &opcao);
        executar = (opcao == 'S' || opcao == 's');

    } while (executar);
    return SUCESSO;
}