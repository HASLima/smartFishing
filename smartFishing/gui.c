/*
 * gui.c
 *
 *  Created on: 19/06/2018
 *      Author: haslima
 */

#include <stdio.h>
#include "gui.h"

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


