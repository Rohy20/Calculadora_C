#include <stdio.h>
#include "operations.h"

void banner(){
    printf("\n");
    printf("░█▀▀░█▀█░█░░░█▀▀░█░█░█░░░█▀█░█▀▄░█▀█░█▀▄░█▀█\n");
    printf("░█░░░█▀█░█░░░█░░░█░█░█░░░█▀█░█░█░█░█░█▀▄░█▀█\n");
    printf("░▀▀▀░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀\n");
    printf("\n");
}

void clearScreen() {
    printf("\033[2J\033[H");
}

int main(){
    int menu;
    int continuar;
    double resultado;
    double num1, num2;

    do{
        clearScreen();
        banner();
        printf("\n===CALCULADORA v1.0===\n");

        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");

        printf("Escolha uma operação: ");
        scanf("%d", &menu);

        if(menu == 5){
            printf("Saindo...\n");
            break;
        }

        if (menu < 1 || menu > 5) {
        printf("Opcao invalida!\n");
        continue;
    }
        printf("Digite um numero: ");
        scanf("%lf", &num1);

        printf("Digite outro numero: ");
        scanf("%lf", &num2);


        switch(menu){
            case 1: 
                resultado = sum(num1, num2);
                printf("\nResultado da soma: %.15g\n", resultado);
                break;
            case 2: 
                resultado = sub(num1, num2);
                printf("\nResultado da subtração: %.15g\n", resultado);
                break;
            case 3:
                resultado = mult(num1, num2);
                printf("\nResultado da multiplicação: %.15g\n", resultado);
                break;
            case 4:
                resultado = div(num1, num2);
                printf("Resultado da divisão: %.15g\n", resultado);
                break;
            default:
                printf("Opção inválida! Digite novamente. \n");
        }

                printf("\n=== O QUE DESEJA FAZER? ===\n");
                printf("1 - Realizar outra operacao\n");
                printf("2 - Finalizar programa\n");

                printf("Escolha: ");
                scanf("%d", &continuar);

            if (continuar == 2) {
                clearScreen();
                printf("\nFinalizando calculadora...\n");
                break;
            }

    }while(menu != 5);
    
    return 0;
}