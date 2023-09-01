#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *mtrx[40][40];
    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            mtrx[i][j] = "|";
        }
    }
    for (;;)
    {
        printf("\033[2J\033[1;1H");
        for (int k = 0; k < 40; k++)
        {
            printf("%s", mtrx[k][k]);
        }
    }
}