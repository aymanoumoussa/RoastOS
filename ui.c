#include <stdio.h>
#include <string.h>

void showIntro(char text[])
{

        for (int i = 0; text[i] != '\0'; i++)
        {

                printf("%c", text[i]);
                fflush(stdout);
                Sleep(30);
        }
}
void showLogo(char logo[])
{
        for (int i = 0; logo[i] != '\0'; i++)
        {

                printf("%c", logo[i]);
                fflush(stdout);
                Sleep(1);
        }
}

void sysBoot(char message[])
{

        int i = 700;
        printf("%s.", message);
        Sleep(i);
        printf("%s..", message);
        Sleep(i);
        printf("%s...", message);
        Sleep(i);
        printf("%s....", message);
        Sleep(i);
        printf("%s.....", message);
        Sleep(i);
        printf("%s......", message);
        Sleep(i);
        printf("%s.......", message);
        Sleep(i);
        printf("%s........", message);
        Sleep(i);
        printf("%s.........\n", message);
        Sleep(i);
        fflush(stdout);
}

void roastBoot(char message[])
{

        int i = 700;
        printf("%s.", message);
        Sleep(i);
        printf("%s..", message);
        Sleep(i);
        printf("%s...", message);
        Sleep(i);
        printf("%s....", message);
        Sleep(i);
        printf("%s.....", message);
        Sleep(i);
        printf("%s......", message);
        Sleep(i);
        printf("%s.......", message);
        Sleep(i);
        printf("%s........", message);
        Sleep(i);
        printf("%s.........", message);
        Sleep(i);
        printf("%s......... [OK]\n", message);
        fflush(stdout);
}

void searchDatabaseOK(char message[])
{

        int i = 700;
        printf("%s.", message);
        Sleep(i);
        printf("%s..", message);
        Sleep(i);
        printf("%s...", message);
        Sleep(i);
        printf("%s....", message);
        Sleep(i);
        printf("%s.....", message);
        Sleep(i);
        printf("%s......", message);
        Sleep(i);
        printf("%s.......", message);
        Sleep(i);
        printf("%s........", message);
        Sleep(i);
        printf("%s.........", message);
        Sleep(i);
        printf("%s......... [Found]\n", message);
        fflush(stdout);
}

void searchDatabaseFAIL(char message[])
{

        int i = 700;
        printf("%s.", message);
        Sleep(i);
        printf("%s..", message);
        Sleep(i);
        printf("%s...", message);
        Sleep(i);
        printf("%s....", message);
        Sleep(i);
        printf("%s.....", message);
        Sleep(i);
        printf("%s......", message);
        Sleep(i);
        printf("%s.......", message);
        Sleep(i);
        printf("%s........", message);
        Sleep(i);
        printf("%s.........", message);
        Sleep(i);
        printf("%s......... [Not Found]\n", message);
        fflush(stdout);
}

void powerOn(char message[])
{

        int i = 700;
        printf("%s.", message);
        Sleep(i);
        printf("%s..", message);
        Sleep(i);
        printf("%s...", message);
        Sleep(i);
        printf("%s....", message);
        Sleep(i);
        printf("%s.....", message);
        Sleep(i);
        printf("%s......", message);
        Sleep(i);
        printf("%s.......", message);
        Sleep(i);
        printf("%s........", message);
        Sleep(i);
        printf("%s.........\n\n", message);
        Sleep(i);
        fflush(stdout);
}

void bootSequence(char code[])
{

        int i = 100;
        printf("%s ", code);
        Sleep(i);
        printf("%s b", code);
        Sleep(i);
        printf("%s bo", code);
        Sleep(i);
        printf("%s boo", code);
        Sleep(i);
        printf("%s boot", code);
        Sleep(i);
        printf("%s boot_", code);
        Sleep(i);
        printf("%s boot_s", code);
        Sleep(i);
        printf("%s boot_se", code);
        Sleep(i);
        printf("%s boot_seq", code);
        Sleep(i);
        printf("%s boot_sequ", code);
        Sleep(i);
        printf("%s boot_seque", code);
        Sleep(i);
        printf("%s boot_sequen", code);
        Sleep(i);
        printf("%s boot_sequenc", code);
        Sleep(i);
        printf("%s boot_sequence", code);
        Sleep(i);
        printf("%s boot_sequence ", code);
        Sleep(i);
        printf("%s boot_sequence -", code);
        Sleep(i);
        printf("%s boot_sequence --", code);
        Sleep(i);
        printf("%s boot_sequence --s", code);
        Sleep(i);
        printf("%s boot_sequence --st", code);
        Sleep(i);
        printf("%s boot_sequence --sta", code);
        Sleep(i);
        printf("%s boot_sequence --star", code);
        Sleep(i);
        printf("%s boot_sequence --start\n\n", code);
        Sleep(i);

        fflush(stdout);
}

void printText(char text[])
{

        printf("%s", text);
        Sleep(3000);
        fflush(stdout);
}

void printCommandLine(char text[])
{

        printf("%s", text);
        Sleep(1000);
        fflush(stdout);
}

void getCommand(char command[])
{
        fgets(command, 25, stdin);
        int commandLength = strlen(command);
        for (int i = 0; i < commandLength; i++)
        {
                if (command[i] == '\n')
                {
                        command[i] = '\0';
                        break;
                }
        }
}