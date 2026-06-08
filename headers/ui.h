#ifndef UI_H
#define UI_H
#include "../ui.c"

void showIntro(char text[]);
void showLogo(char logo[]);
void printText(char text[]);
void sysBoot(char message[]);
void bootSequence(char code[]);
void getCommand(char command[]);
void printCommandLine(char text[]);
void powerOn(char message[]);
void roastBoot(char message[]);
void searchDatabaseOK(char message[]);
void searchDatabaseFAIL(char message[]);

#endif