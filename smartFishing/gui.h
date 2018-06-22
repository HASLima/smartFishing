/*
 * gui.h
 *
 *  Created on: 19/06/2018
 *      Author: HASLima
 */

#ifndef GUI_H_
#define GUI_H_

/*função da mensagem de boas vindas*/
void MensagemBoasVindas(void);

/*divider print function*/
void Separador(int);

/*print the player's status*/
void PrintStatus(void);

/*print the options*/
void PrintOptions(void);

/*ask the user for his configuration. Name, Compaby name etc.*/
void AskUserConfiguration(void);

/* verifies if the last character is newline and if so it changes it for '\0'*/
void CheckForNewLine(char*);

#endif /* GUI_H_ */
