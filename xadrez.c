#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Identificadores e inicio do Desafio Xadrez
    int casabispo = 0, casatorre = 0, casarainha = 0;
    printf("***Desafio Xadrez***\n");

    // Na linha abaixo a identificação de qual peça está sendo movimentada
    printf("\n");
    printf("Torre:\n");

    // Uso da estrutura de repetição for para a movimentação da Torre
    for (casatorre = 0; casatorre <= 5; casatorre++) {
    printf("Direita\n");
    }

    printf("\n");
    printf("Bispo:\n");

    // Uso da estrutura de repetição while para a movimentação da Torre
    while (casabispo <= 5)
    {
    printf("Diagonal superior direita\n");
    casabispo++;
    }

    printf("\n");
    printf("Rainha:\n");

    // Uso da estrutura de repetição do-while para a movimentação da Torre
    do
    {
    printf("Esquerda\n");
    casarainha++;
    } while (casarainha <= 8);
    

    return 0;
}
