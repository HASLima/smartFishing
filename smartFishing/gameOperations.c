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


