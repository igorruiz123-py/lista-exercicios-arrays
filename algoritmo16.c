#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// leia um vetor de 20 inteiros;
// conte e exiba quantos valores s˜ao pares e quantos s˜ao ´ımpares.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int main(){

    while(true){

        int nums[20];
        int len = sizeof(nums) / sizeof(nums[0]);
        bool charfound = false;

        // Entrada de dados pelo usuário
        for (int i = 0; i < len; i++){
            printf("Enter a number: ");
            if (scanf(" %d", &nums[i]) == 0){
                charfound = true;
                FlushBuffer();
            }
        }

        system("cls");

        // Condição caso encontre dado tipo char
        if (charfound){
            printf("Invalid entry! \n");
            continue;
        }

        int EvenCounter = 0;
        int OddCounter = 0;

        // Contador de pares e impares
        for (int i = 0; i < len; i++){
            if (nums[i] % 2 == 0){
                EvenCounter++;
            }
            else if (nums[i] % 2 != 0){
                OddCounter++;
            }
        }

        // Display nos números pares
        for (int i = 0; i < len; i++){
            if (nums[i] % 2 == 0){
                printf("Even Number: %d \n", nums[i]);
            }
        }

        printf("\n");

        // Display nos números impares
        for (int i = 0; i < len; i++){
            if (nums[i] % 2 != 0){
                printf("Odd Number: %d \n", nums[i]);
            }
        }
        
        printf("\n");

        printf("Even Numbers: %d \n", EvenCounter);

        printf("\n");

        printf("Odd Numbers: %d \n", OddCounter);

        break;

    }
}