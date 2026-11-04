#include <stdio.h>
#include "operations.h"
#include "advanced.h"
#include <math.h>

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
        printf("\n===CALCULADORA v1.1===\n");

        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Operações Avançadas\n");
        printf("6 - Sair\n");

        printf("Escolha uma operação: ");
        scanf("%d", &menu);

        if(menu == 6){
            printf("Saindo...\n");
            break;
        }

        if (menu < 1 || menu > 6) {
        printf("Opcao invalida!\n");
        continue;
    }

        switch(menu){
            case 1:
                printf("Digite um numero: ");
                scanf("%lf", &num1);

                printf("Digite outro numero: ");
                scanf("%lf", &num2);

                resultado = sum(num1, num2);
                printf("\nResultado da soma: %.15g\n", resultado);
                break;
            case 2: 
                printf("Digite um numero: ");
                scanf("%lf", &num1);

                printf("Digite outro numero: ");
                scanf("%lf", &num2);

                resultado = sub(num1, num2);
                printf("\nResultado da subtração: %.15g\n", resultado);
                break;
            case 3:
                printf("Digite um numero: ");
                scanf("%lf", &num1);

                printf("Digite outro numero: ");
                scanf("%lf", &num2);

                resultado = mult(num1, num2);
                printf("\nResultado da multiplicação: %.15g\n", resultado);
                break;
            case 4:
                printf("Digite um numero: ");
                scanf("%lf", &num1);

                printf("Digite outro numero: ");
                scanf("%lf", &num2);

                resultado = div(num1, num2);
                printf("Resultado da divisão: %.15g\n", resultado);
                break;
            case 5:
                clearScreen();
                printf("=== Operações Avançadas ===\n");
                printf("1 - Potência\n");
                printf("2 - Raiz Quadrada\n");
                printf("3 - Porcentagem\n");
                printf("4 - Módulo\n");
                printf("5 - Inversão\n");
                printf("0 - Voltar ao menu principal\n");
                printf("Escolha uma operação: ");
                int opAvancada;
                scanf("%d", &opAvancada);

                if (menu == 5 && opAvancada == 0) {
                    continue;
                }

                switch(opAvancada){
                    case 0:
                        printf("Voltando ao menu principal...\n");
                        break;
                    case 1:
                        printf("Digite a base: ");
                        scanf("%lf", &num1);
                        printf("Digite o expoente: ");
                        scanf("%lf", &num2);
                        resultado = power(num1, num2);
                        printf("\nResultado da potência: %.15g\n", resultado);
                        break;
                    case 2:
                        printf("Digite um numero: ");
                        scanf("%lf", &num1);
                        resultado = squareRoot(num1);
                        printf("\nResultado da raiz quadrada: %.15g\n", resultado);
                        break;
                    case 3:
                        printf("Digite o numero: ");
                        scanf("%lf", &num1);
                        printf("Digite a porcentagem: ");
                        scanf("%lf", &num2);
                        resultado = percentage(num1, num2);
                        printf("\nResultado da porcentagem: %.15g\n", resultado);
                        break;
                    case 4:
                        printf("Digite um numero: ");
                        scanf("%lf", &num1);
                        resultado = fabs(num1);
                        printf("\nResultado do módulo: %.15g\n", resultado);
                        break;
                    case 5:
                        printf("Digite um numero: ");
                        scanf("%lf", &num1);
                        resultado = 1.0 / num1;
                        printf("\nResultado da inversão: %.15g\n", resultado);
                        break;
                    default:
                        printf("Opção inválida! Digite novamente. \n");
                }
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

    }while(menu != 6);
    
    return 0;
}