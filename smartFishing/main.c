/*
 * main.c
 *
 *  Created on: 19/06/2018
 *      Author: HASLima
 */
#include <stdio.h>
#include <string.h>
#include "gui.h"
#include "gameOperations.h"


int main(int argc, char **argv) {
	MensagemBoasVindas();

	AskUserConfiguration();

	PrintStatus();


	return 1;
}



