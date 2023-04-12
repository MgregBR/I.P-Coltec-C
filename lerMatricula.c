#include <stdio.h>
#define SUCESSO 0

// LER MATRICULA E REPASSAR EMAIL

int main(int argc,char ** argv) {
    int matricula;

    printf("\nOla digite seu numero de matricula: ");
    scanf("%d",&matricula);

    printf("\nSeu email institucional eh: %d@teiacoltec.org\n", matricula);
    
    printf("\n");

    return SUCESSO;
}