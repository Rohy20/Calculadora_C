#include <stdio.h>
#include "advanced_menu.h"

int advanced_menu(void) {
    int opcao;

    printf("\n=== OPERACOES AVANCADAS ===\n");
    printf("1 - Potência\n");
    printf("2 - Raiz Quadrada\n");
    printf("3 - Porcentagem\n");
    printf("4 - Módulo\n");
    printf("5 - Inversão\n");
    printf("0 - Voltar ao menu principal\n");

    printf("\nEscolha uma operação: ");

    if (scanf("%d", &opcao) != 1) {
        int c;

        while ((c = getchar()) != '\n' && c != EOF) {
        }

        return -1;
    }

    return opcao;
}