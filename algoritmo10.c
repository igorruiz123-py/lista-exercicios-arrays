#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// Crie um vetor de 5 posições para armazenar nomes de pessoas (caracteres).
// Solicite que o usuário informe os nomes.
// Após o preenchimento, pergunte por um nome e informe:
// Se foi encontrado ou não.
// Em qual posição estava (caso encontrado).

int main(){

    while(true){

        char Numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int LenghtNums = sizeof(Numbers) / sizeof(Numbers[0]);
        char Names[5][50];
        bool NumFound = false;

        // Entrada de dados do usuário
        for (int i = 0; i < 5; i++){
            printf("Enter Name: ");
            fgets(Names[i], sizeof(Names[i]), stdin);
            Names[i][strcspn(Names[i], "\n")] = '\0'; // Para retirar o "\n" do fgets()
        }
        
        // Verificação para prevenir o usuário de inserir digitos
        for (int i = 0; i < 5; i++){
            for (int j = 0; Names[i][j] != '\0'; j++){
                for (int k = 0; k < LenghtNums; k++){
                        if (Names[i][j] == Numbers[k]){
                            NumFound = true;
                            break;
                        }
                    }
                }
            }

            printf("\n");
    
        if (NumFound){
            printf("Invalid Entry! \n");
            NumFound = false;
            continue;
        }

        printf("\n");

        // Entrada de um nome qualquer do usuário
        char UserName[50];
        bool UserNameFound = false;
        int Target = -1;

        printf("Enter Any User Name: ");
        fgets(UserName, sizeof(UserName), stdin);
        UserName[strcspn(UserName, "\n")] = '\0';

        // Verificação para encontrar possiveis digitos na entrada do usuário
        for (int i = 0; UserName[i] != '\0'; i++){
            for (int j = 0; j < LenghtNums; j++){
                if (UserName[i] == Numbers[j]){
                    NumFound = true;
                    break;
                }
            }
        }

        if (NumFound){
            printf("Invalid Entry! \n");
            NumFound = false;
            continue;
        }

        // Verificação para saber se o nome informado pelo usuário existe no array
        for (int i = 0; i < 5; i++){
                if (strcmp(UserName, Names[i]) == 0){
                    UserNameFound = true;
                    Target  = i;
                    break;
                }
            }
        
        // Caso o nome exista, damos um display no indice dele
        if (UserNameFound){
            printf("User Name index is: %d \n", Target);
        }

        else if (!UserNameFound){
            printf("Not Found! \n");
        }

        break;
    }
}