#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de 10 posições para armazenar números reais.
// Solicite os valores ao usuário.
// Após o preenchimento, exiba todos os valores na ordem inversa



void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    bool IsTrue = true;

    while (IsTrue){

        float FloatNumbers[10];
        bool CharsFound = false;

        // Entrada do usuário
        for (int i = 0; i < 10; i++){
            printf("Enter a float number: ");
            int TempCheckScan = scanf(" %f", &FloatNumbers[i]);
             
            // Verificação para encontrar caractéres e números inteiros
            if (TempCheckScan == 0){
                CharsFound = true;
                FlushBuffer();
            }
        }

        if (CharsFound){
            printf("Invalid Entry! \n");
            continue;
        }

        // Display do array na ordem inversa
        for (int i = 10; i >= 0 ; i--){
            printf("Reversed order: %.2f \n", FloatNumbers[i]);
        }

        break;
    }
}