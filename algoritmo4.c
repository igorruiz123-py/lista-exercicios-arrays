#include <stdio.h>
#include <stdbool.h>

// Reverse Characters
// Write a C program to print the following characters in reverse.
// Test Characters: 'X', 'M', 'L'
// The reverse of XML is LMX

void FlushBuffer(){
    char temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

void NewLine(){
    printf("\n");
}

int main(){

     bool IsTrue = true;

     while(IsTrue){

        // Definindo array de 3 elementos
        char Characters[3] = {};
        char ReversedCharacters[3] = {};
        bool TempCheckEntry = false;

        // Entrada do usuário para preencher o array
        for (int i = 0; i < 3; i++){
            printf("Enter a character: ");
            scanf(" %c", &Characters[i]);

            // Validação para impedir o usuário de inserir um digito
            if (Characters[i] >= '0' && Characters[i] <= '9'){
                TempCheckEntry = true;
                FlushBuffer();
            }
        }

        if (TempCheckEntry){
            printf("Invalid Entry! Character must not be digits \n");
            continue;
        }

        NewLine();

        // Display do array na ordem de entrada do usuário
        for (int i = 0; i < 3; i++){
            printf("Characters: %c \n", Characters[i]);
        }

        NewLine();

        // Invertendo a ordem do array
        ReversedCharacters[0] = Characters[2];
        ReversedCharacters[1] = Characters[1];
        ReversedCharacters[2] = Characters[0];

        // Display do array de ordem invertida
        for (int i = 0; i < 3; i++){
            printf("Reversed Characters: %c \n", ReversedCharacters[i]);
        }
        
        NewLine();
        FlushBuffer();

        // Entrada do usuário para continuar ou sair do programa
        while(IsTrue){
            char TempChoice;
            printf("Would you like to continue [Y] [N]: ");
            scanf("%c", &TempChoice);

            if (TempChoice >= '0' && TempChoice <= '9'){
                printf("Invalid Entry \n");
                continue;
            }

            else if (TempChoice == 'Y' || TempChoice == 'y'){
                FlushBuffer();
                break;
            }

            else if (TempChoice == 'N' || TempChoice == 'n'){
                printf("You left the program...");
                IsTrue = false;
                break;
            }
        }

        if (!IsTrue){
            break;
        }


     }
}