#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// Algoritmo de fatorial.
// O usuário deve digitar o nome (não composto) e sua tarefa é imprimir a permutação do nome.
// Aprendendo Nested Loops, strings, arrays e validação de entradas

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF){}
}


int main(){

    bool RunningProgram = true;

    while(RunningProgram){

        char Name[1024];

        bool SpaceFound = false;
        bool NumbersFound = false;

        int RepeatedChar = 0;

        char Numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int LenghtNumbers = sizeof(Numbers) / sizeof(Numbers[0]);


        // Entrada de dados
        printf("Enter Name: ");
        fgets(Name, sizeof(Name), stdin);
        Name[strcspn(Name, "\n")] = '\0'; // Para retirar o "\n" do fgets()

        // Começo da verificação para encontrar espços
        for (int i = 0; Name[i] != '\0'; i++){
            
            if (Name[i] == ' '){
                SpaceFound = true;
                break;
            }
        }
        
        if (SpaceFound){
            printf("Space Found! No compost names allowed! \n");
            SpaceFound = false;
            continue;
        }
        // Fim da verificação para encontrar espaços

        // Começo da verificação para encontrar digitos
        for (int i = 0; Name[i] !='\0'; i++){
            for (int j = 0; j < LenghtNumbers; j++){
                if (Name[i] == Numbers[j]){
                    NumbersFound = true;
                    break;
                }
            }
        }

        if (NumbersFound){
            printf("Number was found! No digits allowed! \n");
            NumbersFound = false;
            continue;
        }
        // Fim da verificação para encontrar digitos

        // Começo da verificação para encontrar caractéres repetidos
        for (int i = 0; Name[i] != '\0'; i++){
            for (int j = i + 1; Name[j] != '\0' && Name[j] != '\n'; j++){
                if (Name[i] == Name[j]){
                    RepeatedChar++;
                    break;
                }
                
            }           
        }
        // Fim da verificação para encontrar caractéres repetidos

        // Começo do fatorial para nomes sem caractéres repetidos
        if (RepeatedChar == 0){
            int Temp = strlen(Name);
            int Fatorial = 1;
            for (int i = 1; i <= Temp; i++){
                Fatorial =  Fatorial * i;
            }
            
            printf("The fatorial of %s is %d \n", Name, Fatorial);
        }
        // Fim do fatorial para nomes sem caractéres repetidos

        // Começo do fatorial para nomes com caractéres repetidos
        else if (RepeatedChar > 0){
            int Temp = strlen(Name);
            int Fatorial1 = 1;
            for (int i = 1; i <= Temp; i++){
                Fatorial1 = Fatorial1 * i;
            }

            int Fatorial2 = 1;
            for (int j = 1; j <= RepeatedChar; j++){
                Fatorial2 = Fatorial2 * j;
            }

            int Result = Fatorial1 / Fatorial2;

            printf("The fatorial of %s is %d \n", Name, Result);
        }
        // Fim do fatorial para nomes com caractéres repetidos

        // Começo da entrada do usuário para continuar ou sair do programa
        while (RunningProgram){
            int TempChoice;
            printf("Would you like to continue [1] = Yes [0] = No: ");
            int CheckScan = scanf("%d", &TempChoice);

            if (CheckScan == 0){
                printf("Invalid Entry! \n");
                FlushBuffer();
                continue;
            }

            if (TempChoice == 1){
                FlushBuffer();
                break;
            }

            else if (TempChoice == 0){
                printf("You left the program... \n");
                RunningProgram = false;
                break;
            }

            else {
                printf("Invalid Entry! \n");
                FlushBuffer();
                continue;
            }

        }
        // Fim da entrada do usuário para continuar ou sair do programa

        if (!RunningProgram){
            break;
            
        }
    }

    return 0;
}