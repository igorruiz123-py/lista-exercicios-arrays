#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de 5 posições do tipo inteiro
// Solicite ao usuário que informe um valor para cada posição
// Após o preenchimento, exiba todos os valores cadastrados.


void FlushBuffer(){
    int Temp;

    while ((Temp = getchar()) != '\n' && Temp != EOF);
}

int main(){
    
    bool Istrue = true;

    while(Istrue){

        int Numbers[5];
        bool CharsFound = false;

        // Entrada de dados do usuário
        for (int i = 0; i < 5; i++){
            printf("Enter a number: ");
            int TempCheckScan = scanf(" %d", &Numbers[i]);

            // Verificação para encontrar caractéres
            if (TempCheckScan == 0){
                CharsFound = true;
                FlushBuffer();
            }
        }

        if (CharsFound){
            CharsFound = false;
            printf("Invalid Entry! \n");
            continue;
        }

        // Display do array na ordem de entrada
        for (int i = 0; i < 5; i++){
            printf("Numbers: %d \n", Numbers[i]);
        }

        break;
    }
}