#include <stdio.h> 

void sum(){
    float a, b;
    float result;
    printf("Digit the numbers Please: \n");
    scanf("%f %f", &a, &b);
    result = a + b;
    printf("%.2f + %.2f = %.2f\n", a, b, result);
}

void sub(){
    float a, b;
    float result;
    printf("Digit the numbers Please: \n");
    scanf("%f %f", &a, &b);
    result = a - b;
    printf("%.2f - %.2f = %.2f\n", a, b, result);
}

void mult(){
    float a, b;
    float result;
    printf("Digit the numbers Please: \n");
    scanf("%f %f", &a, &b);
    result = a * b;
    printf("%.2f x %.2f = %.2f\n", a, b, result);
}

void div(){
    float a, b;
    float result;
    printf("Digit the numbers Please: \n");
    scanf("%f %f", &a, &b);
    result = a / b;
    printf("%.2f / %.2f = %.2f\n", a, b, result);
}

int main(){
    int option;
    char a_o;
    do{
printf("SIMPLE CALCULATOR BY:ROHY MAIA\n");
printf(" _____________________\n");
printf("|  _________________  |\n");
printf("| | JO           0. | |\n");
printf("| |_________________| |\n");
printf("|  ___ ___ ___   ___  |\n");
printf("| | 7 | 8 | 9 | | + | |\n");
printf("| |___|___|___| |___| |\n");
printf("| | 4 | 5 | 6 | | - | |\n");
printf("| |___|___|___| |___| |\n");
printf("| | 1 | 2 | 3 | | x | |\n");
printf("| |___|___|___| |___| |\n");
printf("| | . | 0 | = | | / | |\n");
printf("| |___|___|___| |___| |\n");
printf("|_____________________|\n");
printf("Please, choose one option\n");
printf("1 - Addition\n");
printf("2 - Subtraction\n");
printf("3 - Multiplication\n");
printf("4 - Division\n");
printf("0 - Close\n");
scanf("%d", &option);

switch(option){
    case 1: sum(); break;
    case 2: sub(); break;
    case 3: mult(); break;
    case 4: div(); break;
    case 0: printf("Exiting...\n"); break;
    default: printf("Invalid option! please, try again\n");
    }

    if (option != 0) {
            printf("Do you want to perform another operation? (y/n): ");
            scanf(" %c", &a_o);
        }
        
    } while(option != 0 && (a_o == 'y' || a_o == 'Y'));

    return 0;
}