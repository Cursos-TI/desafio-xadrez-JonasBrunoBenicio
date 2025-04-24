#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
        // Nível Novato - Movimentação das Peças Xadrez

        int bispoDiagonal;
        int torreDireita = 1;
        int rainhaEsquerda = 1;
    
        // Movimentação do Bispo
        // Utilizando estrutura de repetição for.
        for (bispoDiagonal = 1; bispoDiagonal <= 5; bispoDiagonal++)
        {
            printf("Bispo andou %d casas para diagonal superior direita\n", bispoDiagonal); //imprime movimento da peça
        }
    
        printf("\n");
    
        // Movimentação da Torre
        // Utilizando estrutura de repetição while
        while (torreDireita <= 5)
        {
            printf("Torre moveu %d casas para direita\n", torreDireita);
            torreDireita++; //imprime movimento da peça
        }
    
        printf("\n");
    
        // Movimentação da Rainha
        // Utilizando estrurura de repetição Do-While
        do
        {   
            printf("Rainha moveu %d casas para esquerda\n", rainhaEsquerda);
            rainhaEsquerda++; //imprime movimento da peça
        } while (rainhaEsquerda <= 8);
        
        printf("\n");
    
     
        return 0;
    }