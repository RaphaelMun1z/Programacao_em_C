// 3. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
// valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador
// apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido.
#include <stdio.h>

int main() {
	float investment1; // Quanto o indivíduo apostou
	float investmentPercentage1; // Fração da aposta
	float prizeReturn1; // Retorno da aposta

	float investment2; // Quanto o indivíduo apostou
	float investmentPercentage2; // Fração da aposta
	float prizeReturn2; // Retorno da aposta

	float investment3; // Quanto o indivíduo apostou
	float investmentPercentage3; // Fração da aposta
	float prizeReturn3; // Retorno da aposta

	float investmentSum; // Soma dos três investimentos/apostas
	float prize; // Prêmio

	printf("Quanto o primeiro indivíduo apostou? ");
	fflush(stdout);
	scanf("%f", &investment1);

	printf("Quanto o segundo indivíduo apostou? ");
	fflush(stdout);
	scanf("%f", &investment2);

	printf("Quanto o terceiro indivíduo apostou? ");
	fflush(stdout);
	scanf("%f", &investment3);

	printf("Qual o valor do prêmio? ");
	fflush(stdout);
	scanf("%f", &prize);

	// Soma os valores apostados
	investmentSum = investment1 + investment2 + investment3;

	// Calcula a fração de cada aposta
	investmentPercentage1 = investment1 / investmentSum;
	investmentPercentage2 = investment2 / investmentSum;
	investmentPercentage3 = investment3 / investmentSum;

	// Calcula quanto cada um tem direito
	prizeReturn1 = investmentPercentage1 * prize;
	prizeReturn2 = investmentPercentage2 * prize;
	prizeReturn3 = investmentPercentage3 * prize;

	printf("Indivíduo 1 deve receber: %f\n", prizeReturn1);
	printf("Indivíduo 2 deve receber: %f\n", prizeReturn2);
	printf("Indivíduo 3 deve receber: %f\n", prizeReturn3);

	return 0;
}
