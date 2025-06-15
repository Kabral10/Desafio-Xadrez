#include <stdio.h>

int main()
{
    int i;
    // torre para cima 5x
    printf("Torre:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Cima\n");
    }


    // rainha para esquerda 8x
    printf("\nRainha:\n");
    i = 0; // reinicia i
    do
    {
        printf("Esquerda\n");
        i++;
    } 
    while (i < 8);


    //bispo diagonal direita 5x
    printf("\nBispo\n");
    i = 0; // reinicia i
    while (i < 5)
    {
        printf("Cima , Direita\n");
        i++;
    }
    

    return 0;
}