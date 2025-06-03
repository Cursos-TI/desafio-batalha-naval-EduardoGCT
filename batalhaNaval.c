#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char tabuleiro[10][10];

    //Inicializa tabuleiro com água
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona o primeiro navio (vertical - 3)
    tabuleiro[1][2] = 3; //parte 1 do navio
    tabuleiro[2][2] = 3; //parte 2 do navio
    tabuleiro[3][2] = 3; //parte 3 do navio

    printf("Navio vertical: \n");
    printf("Coordenada: (1, 2)\n");
     printf("Coordenada: (2, 2)\n");
    printf("Coordenada: (3, 2)\n");
    printf("\n");

    // Posiciona o segundo navio (horizontal - 2)
    tabuleiro[0][4] = 3; //parte 1 do navio
    tabuleiro[0][5] = 3; //parte 2 do navio

    printf("Navio horizontal");
    printf("Coordenada: (0, 4)\n");
    printf("Coordenada: (0, 5)\n\n");

    // Posiciona o terceiro navio (diagonal - 3)
    for (int i = 0; i < 10 && i <= 5 && i <= 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i + j == 9)
            {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Posiciona o quato navio diagonal - 2
    for (int i = 4; i < 6 && i <= 8; i++)
    {
        for (int j = 4; j < 6 && j <= 8; j++)
        {
            if (i == j)
            {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // imprimi o tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }




    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
