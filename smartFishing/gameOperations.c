/*
 * gameOperations.c
 *
 *  Created on: 19/06/2018
 *      Author: HASLima
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gameOperations.h"
#include "gui.h"

int daysGone = 0; /* number of game days the user have played */
double money = 0; /* the amount of money the user has*/
char name[];
TListaEmbarcacoes *playersShips = NULL; /* Creates the list where all the ships owned by the player will be listed. The list starts as new.*/

TListaEmbarcacoes* CreateShip(TListaEmbarcacoes *list, char* shipName, int length, int capacity, int personnel) /*creates a ship provided the data*/
{
	TListaEmbarcacoes *new;
	new = (TListaEmbarcacoes*)malloc(sizeof(TListaEmbarcacoes));
	if (new != NULL) /*testing if malloc worked*/
	{
		new->nome = (char*)malloc((strlen(shipName)+1) * sizeof(char));
		strcpy(new->nome, shipName);
		new->comprimento = length;
		new->capacidade = capacity;
		new->pessoal = personnel;
		new->seguinte = list;
		return new;
	} else {
		printf("Ocorreu um erro ao usar malloc!");
	}
	return list;
}

TListaEmbarcacoes* CreateFirstShip(TListaEmbarcacoes *list) /*creates the first Ship of the player*/
{
	char shipNamePrompt[100];
	TListaEmbarcacoes *newList = NULL;

	Separador(67);
	printf("Todas as frotas come�am por apenas uma embarca��o.\nQual o nome da sua primeira embarca��o?");
	fgets(shipNamePrompt, 100, stdin);
	Separador(67);
	CheckForNewLine(shipNamePrompt);
	newList = CreateShip(list, shipNamePrompt, 4, 100, 1);
	return newList;
}

int DaysGone() /* Returns the number of game days since the beginning of the game*/
{
	return daysGone;
}

void DayPassed() /*Adds one day to daysGone*/
{
	daysGone++;
}

double Money() /*Returns the money in bank account*/
{
	return money;
}

char* ShowName()
{
	return name;
}


