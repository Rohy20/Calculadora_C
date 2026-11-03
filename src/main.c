#include <stdio.h>
#include "operations.h"

int main(){
    int menu;
    double resultado;
    double num1, num2;

    do{
        printf("\n===CALCULADORA===\n");

        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");

        printf("Escolha uma operação\n");
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

    }while(menu != 5);
    return 0;
}