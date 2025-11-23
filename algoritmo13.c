#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de 6 inteiros.
// Ao exibir os valores, mostre:
// O valor original.
// O valor dobrado de cada elemento.

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        int Numbers[6];
        bool CharFound = false;

        for (int i = 0; i < 6; i++){
            printf("Enter Number: ");
            int TempCheckScan = scanf(" %d", &Numbers[i]);

            if (TempCheckScan == 0){
                CharFound = true;
                FlushBuffer();
            }
        }

        printf("\n");

        if (CharFound){
            printf("Invalid Entry! \n");
            CharFound = false;
            continue;
        }

        for (int i = 0; i < 6; i++){
            printf("Number: %d \n", Numbers[i]);
        }

        printf("\n");

        for (int i = 0; i < 6; i++){
            int NumMultBy2 = Numbers[i] * 2;
            printf("Numbers Multiplicated by 2: %d \n", NumMultBy2); 
        }

        break;
    }
}