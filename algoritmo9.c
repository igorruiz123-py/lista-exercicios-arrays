#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de 12 inteiros
// Preencha com valores informados.
// Após o preenchimento:
// Exiba apenas os números pares
// Exiba apenas os números ímpares.

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        int Numbers[12];
        bool CharsFound = false;

        // Entrada de dados do usuário
        for (int i = 0; i < 12; i++){
            printf("Enter Number: ");
            int TempCheckScan = scanf(" %d", &Numbers[i]);

            // Verificação para encontrar possiveis caractéres
            if (TempCheckScan == 0){
                CharsFound = true;
                FlushBuffer();
            }
        }

        if (CharsFound){
            printf("Invalid Entry! \n");
            CharsFound = false;
            continue;
        }

        printf("\n");

        // Display nos números pares
        for (int i = 0; i < 12; i++){
            if (Numbers[i] % 2 == 0){
                printf("Even Numbers: %d \n", Numbers[i]);
            }
        }

        printf("\n");

        // Display nos números impares
        for (int i = 0; i < 12; i++){
            if (Numbers[i] % 2 != 0){
                printf("Odd Numbers: %d \n", Numbers[i]);
            }
        }

        break;
    }
}