#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de 7 números inteiros.
// Após o preenchimento, determine:
// O maior valor do vetor e sua posição
// O menor valor do vetor e sua posição.

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}


int main(){

    while(true){

        int Numbers[7];
        bool CharsFound = false;

        // Entrada de dados do usuário
        for (int i = 0; i < 7; i++){
            printf("Enter Number: ");
            int TempCheckScan = scanf(" %d", &Numbers[i]);
            
            // Validação de entrada prevenindo caractéres
            if (TempCheckScan == 0){
                CharsFound = true;
                FlushBuffer();
            }
        }

        printf("\n");

        if (CharsFound){
            printf("Invalid Entry! \n");
            CharsFound = false;
            continue;
        }

        // Maior valor do vetor
        int Max = 0;

        for (int i = 0; i < 7; i++){
            Max = Numbers[0];
            if (Numbers[i] > Max){
                Max = Numbers[i];
            }
        }

        printf("The Greatest Value is: %d \n", Max);

        printf("\n");

        // Posição do maior valor do vetor
        int MaxTarget = -1;

        for (int i = 0; i < 7; i++){
            if (Max == Numbers[i]){
                MaxTarget = i;
            }
        }

        printf("The Greatest Value index Is: %d \n", MaxTarget);

        // Menor valor do vetor
        int Min = 0;

        for (int i = 0; i < 7; i++){
            Min = Numbers[0];
            if (Numbers[i] < Min){
                Min = Numbers[i];
            }
        }

        printf("The smallest Value Is: %d \n", Min);

        printf("\n");

        // Posição do menor valor do vetor
        int MinTarget = -1;

        for (int i = 0; i < 7; i++){
            if (Min == Numbers[i]){
                MinTarget = i;
            }
        }

        printf("The smallest Value Index Is: %d \n", MinTarget);


        break;
    }
}