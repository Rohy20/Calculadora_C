#include <stdio.h>
#include <math.h>

#include "operations.h"
#include "advanced.h"
#include "main_menu.h"
#include "advanced_menu.h"

void banner(void) {
    printf("\n");
    printf("░█▀▀░█▀█░█░░░█▀▀░█░█░█░░░█▀█░█▀▄░█▀█░█▀▄░█▀█\n");
    printf("░█░░░█▀█░█░░░█░░░█░█░█░░░█▀█░█░█░█░█░█▀▄░█▀█\n");
    printf("░▀▀▀░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀\n");
    printf("\n");
}

void clearScreen(void) {
    printf("\033[2J\033[H");
}

int main(void) {
    int menu;
    int continuar;
    int opAvancada;

    double resultado;
    double num1, num2;

    do {
        clearScreen();
        banner();

        menu = main_menu();

        if (menu == -1) {
            printf("\nEntrada inválida! Digite um número.\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            continue;
        }

        if (menu == 6) {
            printf("\nSaindo da calculadora...\n");
            break;
        }

        if (menu < 1 || menu > 6) {
            printf("\nOpção inválida! Escolha entre 1 e 6.\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            continue;
        }

        switch (menu) {

            case 1:
                printf("\nDigite um número: ");
                scanf("%lf", &num1);

                printf("Digite outro número: ");
                scanf("%lf", &num2);

                resultado = sum(num1, num2);

                printf("\nResultado da soma: %.15g\n", resultado);
                break;

            case 2:
                printf("\nDigite um número: ");
                scanf("%lf", &num1);

                printf("Digite outro número: ");
                scanf("%lf", &num2);

                resultado = sub(num1, num2);

                printf("\nResultado da subtração: %.15g\n", resultado);
                break;

            case 3:
                printf("\nDigite um número: ");
                scanf("%lf", &num1);

                printf("Digite outro número: ");
                scanf("%lf", &num2);

                resultado = mult(num1, num2);

                printf("\nResultado da multiplicação: %.15g\n", resultado);
                break;

            case 4:
                printf("\nDigite um número: ");
                scanf("%lf", &num1);

                printf("Digite outro número: ");
                scanf("%lf", &num2);

                resultado = div(num1, num2);

                printf("\nResultado da divisão: %.15g\n", resultado);
                break;

            case 5:
                clearScreen();

                opAvancada = advanced_menu();

                if (opAvancada == -1) {
                    printf("\nEntrada inválida! Digite um número.\n");
                    printf("Pressione ENTER para continuar...");
                    getchar();
                    break;
                }

                if (opAvancada == 0) {
                    continue;
                }

                switch (opAvancada) {

                    case 1:
                        printf("\nDigite a base: ");
                        scanf("%lf", &num1);

                        printf("Digite o expoente: ");
                        scanf("%lf", &num2);

                        resultado = power(num1, num2);

                        printf("\nResultado da potência: %.15g\n", resultado);
                        break;

                    case 2:
                        printf("\nDigite um número: ");
                        scanf("%lf", &num1);

                        resultado = squareRoot(num1);

                        printf("\nResultado da raiz quadrada: %.15g\n", resultado);
                        break;

                    case 3:
                        printf("\nDigite o número: ");
                        scanf("%lf", &num1);

                        printf("Digite a porcentagem: ");
                        scanf("%lf", &num2);

                        resultado = percentage(num1, num2);

                        printf("\nResultado da porcentagem: %.15g\n", resultado);
                        break;

                    case 4:
                        printf("\nDigite um número: ");
                        scanf("%lf", &num1);

                        resultado = fabs(num1);

                        printf("\nResultado do módulo: %.15g\n", resultado);
                        break;

                    case 5:
                        printf("\nDigite um número: ");
                        scanf("%lf", &num1);

                        if (num1 == 0) {
                            printf("\nNão é possível inverter zero!\n");
                        } else {
                            resultado = 1.0 / num1;

                            printf("\nResultado da inversão: %.15g\n", resultado);
                        }
                        break;

                    default:
                        printf("\nOpção inválida!\n");
                        break;
                }

                break;

            default:
                printf("\nOpção inválida!\n");
                break;
        }

        printf("\n=== O QUE DESEJA FAZER? ===\n");
        printf("1 - Realizar outra operação\n");
        printf("2 - Finalizar programa\n");

        printf("\nEscolha: ");

        if (scanf("%d", &continuar) != 1) {
            printf("\nEntrada inválida!\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
            }

            continuar = 1;
        }

        if (continuar == 2) {
            clearScreen();
            printf("\nFinalizando calculadora...\n");
            break;
        }

    } while (1);

    return 0;
}