#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Algoritmo de somar dois números e dar a opção do usuário parar a execução ou continuar
// Aprendendo a controlar o input e o output do usuário
// Buffers e validações de entrada

void flush_buffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF){}
}

int main(){

    bool exit = false;

    while (!false){
        float float_temp1 = 0;
        float float_temp2 = 0;

        printf("Type a number: ");
        int scan_num1 = scanf("%f", &float_temp1);

        if (scan_num1 == 0){
            printf("Invalid entry! \n");
            flush_buffer();
            continue;
        }

        int num1 = (int)float_temp1;

        printf("Type another number: ");
        int scan_num2 = scanf("%f", &float_temp2);

        if (scan_num2 == 0){
            printf("Invalid entry! \n");
            flush_buffer();
            continue;
        }

        int num2 = (int)float_temp2;

        int result = num1 + num2;
        printf("The result is %d \n", result);

        while(1){
            float tempchoice;
            printf("Would you like to continue [1] to Yes [0] to No: ");
            int scan_choice = scanf("%f", &tempchoice);

            if (scan_choice == 0){
                printf("Invalid Entry! \n");
                flush_buffer();
                continue;
            }

            int choice = (int)tempchoice;

            if (choice == 1){
                system("cls");
                break;
            }

            else if (choice == 0){
                exit = true;
                printf("You left the program... \n");
                break;
                
            }

            else{
                printf("Invalid entry! \n");
                flush_buffer();
                continue;;
            }
        }

        if (exit){
            break;
        }
    }

    return 0;
}