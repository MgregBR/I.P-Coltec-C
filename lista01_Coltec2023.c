
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

// ler numerador e denominador e imprimir resultado tipo float
void Quest01(void) {
    float numerador;
    float denominador;
    float res;

    printf("\n\nQuestao 1\n\n");

    //Obter valores Numerador e denominador
    printf("\nDigite o valor do numerador\n");
    scanf("%f", &numerador);
    printf("\nDigite um valor diferente de zero para o denominador\n");
    scanf("%f", &denominador);

    //Realizar verificação se denominador é diferente de zero imprimir resultado
    if (denominador == 0) {
        printf("\nDigite um valor diferente de zero para o denominador");
    }
    else {
        res = numerador / denominador;
        res = numerador / denominador;
        printf("\nO resultado de %f dividido por %f eh:%.2f", numerador, denominador, res);
    }

}

// Realizar soma e impressão de resultado
void Quest02(void) {
    int num01;
    int num02;
    int num03;
    int num04;
    int num05;
    int soma[10];
    int contador = 10;

    printf("\n\nQuestao 2\n\n");
    
    printf("\nDigite cinco valores:");
    scanf("%d\n%d\n%d\n%d\n%d\n", &num01, &num02, &num03, &num04, &num05);

    soma[0] = num01 + num02;
    soma[1] = num01 + num03;
    soma[2] = num01 + num04;
    soma[3] = num01 + num05;
    soma[4] = num02 + num03;
    soma[5] = num02 + num04;
    soma[6] = num02 + num05;
    soma[7] = num03 + num04;
    soma[8] = num03 + num04;
    soma[9] = num04 + num05;

    for (int i = 0; i < contador; i++) {
        printf("O valor da soma %d eh: '%d'\n",i, soma[i]);
    }
}

// Calculo de Média aritimética
void Quest03(void) {
    float num_argumentos;
    float media; 
    num_argumentos = 6.0;
    float soma[6];

    printf("\n\nQuestao 3\n\n");

    printf("\nDigite 6 valores:\n");

    //Laço para ler valores e atribuir a vetor
    for (int i = 0; i < num_argumentos; i++) {
        scanf("%f", &soma[i]);
    }
   //Calculo da média
    media = (soma[1] + soma[2] + soma[3] + soma[4] + soma[5] + soma[0]) / num_argumentos;
    printf("o valor da media eh: '%.2f'\n",media);
 }

// type casting 
void Quest04(void) {
    float h;

    printf("\n\nQuestao 4\n\n");
    //problema H = 1/1 + 1/2 + 1/3 + 1/4 + 1/5
    //alteração de um dos valores da fração para´possivel resolução
    h = (1.0/1)+(1.0/2)+(1.0/3)+(1.0/4)+(1.0/5);
    printf("O valor de H eh:'%.2f'\n", h);
}

//Calculo percentual 
void Quest05(void) {
    float salario_atual;
    float salario_antigo;
    float porc_aumento;

    printf("\n\nQuestao 5\n\n");

    printf("\nDigite seu salario atual: \n");
    scanf("%f", &salario_atual);

    printf("\nDigite seu salario antigo: \n");
    scanf("%f", &salario_antigo);

    //calculo da alteração percentual
    porc_aumento = (((salario_atual / salario_antigo) - 1)*100);
    printf("\nO aumento percentual foi de %.2f%%: \n",porc_aumento);

}
// Calculo de frações com 3 casas decimais
void Quest06(void) {
    float numerador;
    float denominador;
    float resultado;

    printf("\n\nQuestao 6\n\n");

    printf("\nDigite o valor do numerador: \n");
    scanf("%f", &numerador);
    printf("\nDigite o valor do denominador: \n");
    scanf("%f", &denominador);

    resultado = numerador / denominador;
    printf("\nO resultado eh:'%.3f'\n", resultado);

}


// Apresentação de notas de alunos tabuladas
void Quest07(void) {
    float aluno01[3];
    float aluno02[3];
    float aluno03[3];

    printf("\n\nQuestao 7\n\n");

    printf("\nDigite as notas do primeiro aluno: ");
    scanf("%f %f %f", &aluno01[0], &aluno01[1], &aluno01[2]);

    printf("\nDigite as notas do segundo aluno: ");
    scanf("%f %f %f", &aluno02[0], &aluno02[1], &aluno02[2]);

    printf("\nDigite as notas do terceiro aluno: ");
    scanf("%f %f %f", &aluno03[0], &aluno03[1], &aluno03[2]);

    printf("\nAluno 1:\t%.2f \t%.2f \t%.2f \n", aluno01[0], aluno01[1], aluno01[2]);
    printf("\nAluno 2:\t%.2f \t%.2f \t%.2f \n", aluno02[0], aluno02[1], aluno02[2]);
    printf("\nAluno 3:\t%.2f \t%.2f \t%.2f \n", aluno03[0], aluno03[1], aluno03[2]);
    
}

// leitura e impressão de dados 
// #Tratamento de erros de leitura char
void Quest08(void) {
    int idade;
    char sexo;

    printf("\n\nQuestao 8\n\n");

    printf("\nDigite a idade: ");
    scanf("%d", &idade);
    printf("\nDigite o sexo: [M ou S]");
    scanf(" %c", &sexo);


    if (sexo == 'M' || sexo == 'm') {
        printf("\nA idade eh:'%d' anos\nO sexo eh Masculino\n", idade);
    }
    else if (sexo == 'F' || sexo == 'f') {
        printf("\nA idade eh : '%d' anos\nO sexo eh Feminino\n", idade);
    }
    else {
        printf("\nO sexo nao pode ser identificado\n");
    }
}


int main(int argc, char** argv) {

    int indicador;
    bool executar;
    char opcao;

    // verificar numero da questão desejado e chamar função correspondente
    do{
        printf("\nDigite o numero da questão que deseja executar [1:8]: ");
        scanf("%d", &indicador);
        switch (indicador) {
            case 1: {
                Quest01();
                break;
            }
            case 2: {
                Quest02();
                break;
            }
            case 3: {
                Quest03();
                break;
            }
            case 4: {
                Quest04();
                break;
            }
            case 5: {
                Quest05();
                break;
            }
            case 6: {
                Quest06();
                break;
            }
            case 7: {
                Quest07();
                break;
            }
            case 8: {
                Quest08();
                break;
            }
            default: {
                printf("\n\n###ERRO###\n\nQuestao não encontrada!!!\n\n");
            }
    }
        printf("\nDeseja executar mais alguma questao? [S ou N]: ");
        scanf(" %c", &opcao);
        executar=(opcao == 'S' || opcao == 's');

    } while (executar);

    return SUCESSO;
}