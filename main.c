#include <stdio.h>
#include <windows.h>
#include "headers/ui.h"
#include "headers/roast.h"
#include <string.h>

int main(void)
{

    system("cls");
    showLogo("\n  RRRRR    OOOOO    AAAAA   SSSSS  TTTTTT\n  RR  RR  OO   OO  AA   AA SS        TT\n  RRRRR   OO   OO  AAAAAAA  SSSSS    TT\n  RR RR   OO   OO  AA   AA      SS   TT\n  RR  RR   OOOOO   AA   AA  SSSSS    TT\n\n    MM   MM YY   YY      PPPPPP   CCCCC\n    MMM MMM  YY YY       PP   PP CC\n    MM M MM   YYY        PPPPPP  CC\n    MM   MM   YYY        PP      CC\n    MM   MM   YYY        PP       CCCCC\n\n\n");
    showIntro("==========================================\n#                                        #\n#             ROAST MY PC v1.0           #\n#  COPYRIGHT (C) 2026 ROAST SYSTEMS INC  #\n#                                        #\n==========================================\n\n");
    powerOn("\r> Powering on System");
    bootSequence("\rroot@roast-systems:~$");
    printText("[ SYSTEM BOOT SEQUENCE INITIALIZED ]\n\n");
    sysBoot("\r> Initializing Firmware");
    sysBoot("\r> Running POST");
    sysBoot("\r> Loading Kernel Modules");
    sysBoot("\r> Loading System Databases");
    sysBoot("\r> Starting System Services");
    printText("\n[ SYSTEM READY! WELCOME TO ROAST OS ]\n\n");
    printText("==========================================\n#                                        #\n#          ROAST OS COMMANDS v1.0        #\n#                                        #\n==========================================\n\n> roast_engine --start\n> roast_engine --shutdown\n\n==========================================\n\n");

    int ValidCommand = 1;

    char myCommand[25];

    while (ValidCommand)
    {

        printCommandLine("root@roast-os:~$ ");
        getCommand(myCommand);

        int startCommand = strcmp("roast_engine --start", myCommand);
        int shutdownCommand = strcmp("roast_engine --shutdown", myCommand);

        if (startCommand == 0)
        {
            roast();
        }
        else if (shutdownCommand == 0)
        {
            printf("\n");
            sysBoot("\r> Shutting down RoastOS");
            ValidCommand = 0;
        }

        else
        {
            printCommandLine("\n> roast_engine: unknown command\n\n");
        }
    }
}
