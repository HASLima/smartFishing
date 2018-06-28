/*
 * gameOperations.c
 *
 *  Created on: 19/06/2018
 *      Author: HASLima
 */
#include <stdio.h>
#include "gameOperations.h"

int daysGone = 0; /* number of game days the user have played */
double money = 0; /* the amount of money the user has*/
char name[];
TListaEmbarcacoes *playersShips; /* Creates the list with all the ships owned by the player*/

TListaEmbarcacoes* CreateShip(TListaEmbarcacoes *list, char* name, int length, int capacity, int personnel)
{
	TListaEmbarcacoes *new;
	new = (TListaEmbarcacoes*)malloc(sizeof(TListaEmbarcacoes));
	if (new != NULL) /*testing if malloc worked*/
	{
		new->nome = (char*)malloc(strlen(name)+1);
		strcpy(new->nome, name);
		new->comprimento = length;
		new->capacidade = capacity;
		new->pessoal = personnel;
		new->seguinte = list;
		return new;
	}
	return list;
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


