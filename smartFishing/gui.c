/*
 * gui.c
 *
 *  Created on: 19/06/2018
 *      Author: HASLima
 */

#include <stdio.h>
#include <string.h>
#include "gui.h"
#include "gameOperations.h"

void Separador(int length)
{
	printf("><");
	for (int i = 0; i < length - 4; i++)
		printf("-");
	printf("><\n");
}

void MensagemBoasVindas ()
{
	Separador(67);
	printf("Bem-vindo ao jogo SMART FISHING\n");
	Separador(67);
	printf("Neste jogo pretende-se que o jogador pense sobre a sustentabilidade\n"
			"da pesca. O jogador coloca-se na posição de um gestor de uma frota\n"
			"pesqueira e deve procurar obter lucro, mas também ter em conta a\n"
			"sustentabilidade do mar onde pesca.\n");
	Separador(67);
}

void AskUserConfiguration()
{
	printf("Qual o seu nome?\n");
	fgets(name, 100, stdin);
	CheckForNewLine(name);
	printf("O seu nome é %s\n", name); //TODO APAGAR
}

void PrintOptions()
{
	PrintStatus();
	printf("1 - Embarcações\n");
	printf("2 - Mares\n");
	printf("3 - Prospecção\n");
	printf("4 - Pessoal\n");
}

void PrintStatus()
{
	Separador(67);
	printf("Bom dia, %s!\nPassaram %d dias. Tens %.2f$ na conta\n", ShowName(), DaysGone(), Money());
	Separador(67);
}

void CheckForNewLine(char* string)
{
	int n = strlen(string);
	if (string[n-1] == 10)
	{
		string[n-1] = '\0';
	}
}

