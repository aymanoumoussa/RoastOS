#include <stdio.h>
#include <windows.h>
#include <string.h>
#include "headers/ui.h"

typedef struct
{
    char name[25];
    int tier;
    char brand[5];
} CPU;

typedef struct
{
    char name[25];
    int tier;
    char brand[6];
} GPU;

typedef struct
{
    char size[25];
    int tier;
} RAM;

int searchCPU(char myCPU[])
{

    CPU CPUS[] = {
        {"Intel Core 2 Duo E8400", 1, "Intel"},
        {"AMD Athlon II X2", 1, "AMD"},
        {"AMD FX-4100", 1, "AMD"},
        {"Ryzen 3 3600", 2, "AMD"},
        {"Intel i3-10100", 2, "Intel"},
        {"Ryzen 5 4500", 2, "AMD"},
        {"Ryzen 5 8400F", 3, "AMD"},
        {"Ryzen 5 5600", 3, "AMD"},
        {"Ryzen 5 5600G", 3, "AMD"},
        {"Ryzen 5 5500", 3, "AMD"},
        {"Ryzen 7 9800X3D", 4, "AMD"},
        {"Ryzen 7 7800X3D", 4, "AMD"},
        {"Intel i7-14700K", 4, "AMD"},
        {"Ryzen 9 9900X", 4, "AMD"},
        {"Ryzen 9 9950X", 5, "AMD"},
        {"Ryzen 9 9950X3D", 5, "AMD"},
        {"Intel Core Ultra 9 285K", 5, "Intel"},
    };

    int ValidCPU = 0;

    while (ValidCPU == 0)
    {
        for (int i = 0; i < 17; i++)
        {
            int compareCPU = _stricmp(CPUS[i].name, myCPU);
            if (compareCPU == 0)
            {
                ValidCPU = 1;
                searchDatabaseOK("\r> Searching CPU Database");

                // Prints cpu name:
                // printf("> Your cpu is: %s\n", myCPU);

                int cpuTier = CPUS[i].tier;
                return cpuTier;
            }
        }
        if (ValidCPU == 0)
        {
            searchDatabaseFAIL("\r> Searching CPU Database");
            printCommandLine("\n> Enter CPU:\n");
            getCommand(myCPU);
        }
    }
}

int searchGPU(char myGPU[])
{

    GPU GPUS[] = {
        {"GTX 750 Ti", 1, "NVIDIA"},
        {"GTX 950", 1, "NVIDIA"},
        {"GTX 1050", 1, "NVIDIA"},
        {"RX 460", 1, "AMD"},
        {"RX 560", 1, "AMD"},
        {"RX 580", 1, "AMD"},
        {"RX 580 2048SP", 1, "AMD"},
        {"GTX 1650", 2, "NVIDIA"},
        {"GTX 1650 Super", 2, "NVIDIA"},
        {"GTX 1050 Ti", 2, "NVIDIA"},
        {"RX 6500 XT", 2, "AMD"},
        {"GTX 1660 Super", 3, "NVIDIA"},
        {"RTX 2060", 3, "NVIDIA"},
        {"RTX 3050", 3, "NVIDIA"},
        {"RX 6600", 3, "AMD"},
        {"RX 7600", 3, "AMD"},
        {"RX 6600 XT", 3, "AMD"},
        {"RTX 3060 Ti", 4, "NVIDIA"},
        {"RTX 3070", 4, "NVIDIA"},
        {"RTX 4070", 4, "NVIDIA"},
        {"RX 6700 XT", 4, "AMD"},
        {"RX 7800 XT", 4, "AMD"},
        {"RTX 4070 Super", 4, "NVIDIA"},
        {"RTX 4080 Super", 5, "NVIDIA"},
        {"RTX 4090", 5, "NVIDIA"},
        {"RTX 5080", 5, "NVIDIA"},
        {"RX 7900 XTX", 5, "AMD"},
        {"RTX 5090", 5, "NVIDIA"},
    };

    int ValidGPU = 0;

    while (ValidGPU == 0)
    {
        for (int i = 0; i < 28; i++)
        {
            int compareGPU = _stricmp(GPUS[i].name, myGPU);
            if (compareGPU == 0)
            {
                ValidGPU = 1;
                searchDatabaseOK("\r> Searching GPU Database");

                // Prints gpu name:
                // printf("> Your gpu is: %s\n", myGPU);

                int gpuTier = GPUS[i].tier;
                return gpuTier;
            }
        }
        if (ValidGPU == 0)
        {
            searchDatabaseFAIL("\r> Searching GPU Database");
            printCommandLine("\n> Enter GPU:\n");
            getCommand(myGPU);
        }
    }
}

int searchRAM(char myRAM[])
{

    RAM RAMS[] = {
        {"2GB", 1},
        {"4GB", 1},
        {"6GB", 2},
        {"8GB", 2},
        {"12GB", 3},
        {"16GB", 3},
        {"24GB", 4},
        {"32GB", 4},
        {"64GB", 5},
        {"128GB", 5},

    };

    int ValidRAM = 0;

    while (ValidRAM == 0)
    {
        for (int i = 0; i < 10; i++)
        {
            int compareRAM = _stricmp(RAMS[i].size, myRAM);
            if (compareRAM == 0)
            {
                ValidRAM = 1;
                searchDatabaseOK("\r> Searching RAM Database");

                // Prints ram size:
                // printf("> Your ram size is: %s\n", myRAM);

                int ramTier = RAMS[i].tier;
                return ramTier;
            }
        }
        if (ValidRAM == 0)
        {
            searchDatabaseFAIL("\r> Searching RAM Database");
            printCommandLine("\n> Enter RAM:\n");
            getCommand(myRAM);
        }
    }
}