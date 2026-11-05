#include <stdio.h>
#include "main_menu.h"

int main_menu(void) {
    int menu;

    printf("\n=== CALCULADORA v1.2 ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Operações Avançadas\n");
    printf("6 - Sair\n");

    printf("\nEscolha uma operação: ");

    if (scanf("%d", &menu) != 1) {
        int c;

        while ((c = getchar()) != '\n' && c != EOF) {
        }

        return -1;
    }

    return menu;
}