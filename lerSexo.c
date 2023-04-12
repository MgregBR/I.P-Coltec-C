    #include <stdio.h>
#define SUCESSO 0

// LER SEXO ANIMAL IMPRIMIR SEXO

int main(int argc,char ** argv) {
    char sexo;
    printf("\nOla digite sexo do animal [M/F]");
    scanf(" %c",&sexo);
    
    if (sexo=='m' || sexo=='M') {
        printf("\nO sexo do animal eh MACHO");    
    } else if(sexo=='f' || sexo=='F'){
        printf("\nO sexo do animal eh FEMEA");
    } else {
        printf("\nERROR, CARACTERE NAO IDENTIFICADO");
    }
   
    printf("\n");
    return SUCESSO;
}