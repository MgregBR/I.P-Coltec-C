#include <stdio.h>

#define SUCESSO 0

// VERIFICAÇÃO IMC
int main (int argc, char **argv) {
	int idade;
	float altura;
	float peso;
	float imc;

	printf("digite a sua idade: ");
	scanf("%i", &idade);
	printf("\ndigite a sua altura: ");
	scanf("%f", &altura);
	printf("\ndigite o seu peso: ");
	scanf("%f", &peso);
	imc= peso/(altura*altura);
	printf("\nsua altura e %.2f seu imc e: %.2f\n",altura, imc);


	return SUCESSO;
}















