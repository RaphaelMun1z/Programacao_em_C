// 3. Tr�s amigos jogaram na loteria. Caso eles ganhem, o pr�mio deve ser repartido proporcionalmente ao
// valor que cada um deu para a realiza��o da aposta. Fa�a um programa que leia quanto cada apostador
// apostou, o valor do pr�mio e imprima quanto cada um ganharia do pr�mio com base no valor investido.
#include <stdio.h>

int main() {
	float investment1; // Quanto o indiv�duo apostou
	float investmentPercentage1; // Fra��o da aposta
	float prizeReturn1; // Retorno da aposta

	float investment2; // Quanto o indiv�duo apostou
	float investmentPercentage2; // Fra��o da aposta
	float prizeReturn2; // Retorno da aposta

	float investment3; // Quanto o indiv�duo apostou
	float investmentPercentage3; // Fra��o da aposta
	float prizeReturn3; // Retorno da aposta

	float investmentSum; // Soma dos tr�s investimentos/apostas
	float prize; // Pr�mio

	printf("Quanto o primeiro indiv�duo apostou? ");
	fflush(stdout);
	scanf("%f", &investment1);

	printf("Quanto o segundo indiv�duo apostou? ");
	fflush(stdout);
	scanf("%f", &investment2);

	printf("Quanto o terceiro indiv�duo apostou? ");
	fflush(stdout);
	scanf("%f", &investment3);

	printf("Qual o valor do pr�mio? ");
	fflush(stdout);
	scanf("%f", &prize);

	// Soma os valores apostados
	investmentSum = investment1 + investment2 + investment3;

	// Calcula a fra��o de cada aposta
	investmentPercentage1 = investment1 / investmentSum;
	investmentPercentage2 = investment2 / investmentSum;
	investmentPercentage3 = investment3 / investmentSum;

	// Calcula quanto cada um tem direito
	prizeReturn1 = investmentPercentage1 * prize;
	prizeReturn2 = investmentPercentage2 * prize;
	prizeReturn3 = investmentPercentage3 * prize;

	printf("Indiv�duo 1 deve receber: %f\n", prizeReturn1);
	printf("Indiv�duo 2 deve receber: %f\n", prizeReturn2);
	printf("Indiv�duo 3 deve receber: %f\n", prizeReturn3);

	return 0;
}
