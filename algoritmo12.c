#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de 15 inteiros
// Preencha com valores informados.
// Calcule e exiba a soma de todos os elementos do vetor.


void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        int Numbers[15];
        bool Charfound = false;

        int Sum = 0;
        for (int i = 0; i < 15; i++){
            printf("Enter Number: ");
            int TempCheckScan = scanf(" %d", &Numbers[i]);

            if (TempCheckScan == 0){
                Charfound = true;
                FlushBuffer();
            }

            Sum = Sum + Numbers[i];
        }

        if (Charfound){
            printf("Invalid Entry! \n");
            Charfound = false;
            continue;
        }

        printf("The Numbers Sum is %d \n", Sum);

        break;
    }
}