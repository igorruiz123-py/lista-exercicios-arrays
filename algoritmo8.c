#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de 6 números reais.
// Após o preenchimento, calcule e exiba:
// A média dos valores;
// Quantos valores são acima da média;
// Quantos valores são abaixo da média.

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        float FloatNumber[6];
        bool CharsFound = false;

        // Entrada de dados do usuário 
        for (int i = 0; i < 6; i++){
            printf("Enter a float number: ");
            int TempCheckScan = scanf(" %f", &FloatNumber[i]);

            // Verificação para encontrar caractéres
            if (TempCheckScan == 0){
                CharsFound = true;
                FlushBuffer();
            }
        }

        if (CharsFound){
            printf("Invalid Entry \n");
            CharsFound = false;
            continue;
        }

        // Soma dos números do vetor
        float Sum = 0;

        for (int i = 0; i < 6; i++){
            Sum = Sum + FloatNumber[i];
        }

        printf("\n");

        // Média do vetor
        float Mean = Sum / 6;
        printf("The Numbers Mean is %.2f \n", Mean);
        
        // Valores acima da média
        for (int i = 0; i < 6; i++){
            if (FloatNumber[i] > Mean){
                printf("Values greater than the Mean: %.2f \n", FloatNumber[i]);
            }
        }

        printf("\n");

        // Valores abaixo da média
        for (int i = 0; i < 6; i++){
            if (FloatNumber[i] < Mean){
                printf("Values less than the Mean: %.2f \n", FloatNumber[i]);
            }
        }

        break;
    }
}