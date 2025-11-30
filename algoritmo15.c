#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// leia um vetor de 10 inteiros;
// crie um segundo vetor onde cada elemento seja o dobro do valor correspondente no primeiro;
// imprima os dois vetores.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int main(){

    while(true){

        int nums[10];
        bool CharFound = false;

        // Entrada de dados pelo usuário
        for (int i = 0; i < 10; i++){
            printf("Enter Number: ");
            if (scanf(" %d", &nums[i]) == 0){
                CharFound = true;
                FlushBuffer();
            }
        }

        system("cls");

        if (CharFound){
            printf("Invalid Entry! \n");
            continue;
        }

        // Display no array do usuário
        for (int i = 0; i < 10; i++){
            printf("User Number: %d \n", nums[i]);
        }

        printf("\n");

        // Display do vetor multiplicado por 2
        for (int i = 1; i <= 10; i++){
            nums[i] = i * 2;
            printf("Number mult by 2: %d \n", nums[i]);
        }

        break;

    }
}