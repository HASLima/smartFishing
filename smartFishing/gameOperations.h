/*
 * gameOperations.h
 *
 *  Created on: 19/06/2018
 *      Author: HASLima
 */

#ifndef GAMEOPERATIONS_H_
#define GAMEOPERATIONS_H_

extern char name[100];

typedef struct SListaEmbarcações /*os dados sobre cada uma das embarcações*/
{
	char *nome;
	int comprimento;
	int capacidade;
	int pessoal;
	struct SListaEmbarcações *seguinte;
}TListaEmbarcações;

extern int DaysGone(void);

extern double Money(void);

extern void DayPassed(void);

/* prints name*/
extern char ShowName(void);

#endif /* GAMEOPERATIONS_H_ */
