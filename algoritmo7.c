#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de 8 posições (tipo inteiro).
// Preencha com valores informados pelo usuário.
// Após o preenchimento, peça um número e verifique se ele existe no vetor:
// Se existir, informe a posição onde foi encontrado.
// Se não existir, exiba mensagem de não encontrado.

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){
    
    while(true){

        int Numbers[8];
        bool CharsFound = false;

        // Entrada de dados do usuário
        for (int i = 0; i < 8; i++){
            printf("Enter a number: ");
            int TempCheckScan = scanf(" %d", &Numbers[i]);

            // Verificação para encontrar caractéres
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

        // Entrada do usuário para pedir um número qualquer
        int UserNumber = 0;
        bool NumberFound = false;
        int Target = -1;

        printf("Enter any number: ");
        int TempCheckScan = scanf("%d", &UserNumber);

        if (TempCheckScan == 0){
            printf("Invalid Entry! \n");
            FlushBuffer();
            continue;
        }
        
        // Verificação para saber se o número escolhido pelo usuário existe no array
        for (int i = 0; i < 8; i++){
            if (UserNumber == Numbers[i]){
                NumberFound = true;
            }
        }

        if (NumberFound){
            printf("Number Found! \n");

            // Caso o número exista, verificação para identificar o indice dele no array
            for (int i = 0; i < 8; i++){
                if (UserNumber == Numbers[i]){
                    Target = i;
                    break;
                }
            }

            printf("The Number index is %d \n", Target);
        }
        else {
            printf("Number Not Found! \n");
        }

        break;
    }
}