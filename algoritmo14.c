#include <stdio.h>
#include <stdbool.h>

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        int Numbers[5];
        bool CharFound = false;

        for (int i = 0; i < 5; i++){
            printf("Enter Number: ");
            int TempScan = scanf(" %d", &Numbers[i]);

            if (TempScan == 0){
                CharFound = true;
                FlushBuffer();
            }
        }

        if (CharFound){
            printf("Invalid Entry! \n");
            CharFound = false;
            continue;
        }

        printf("\n");

        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4 - i; j++){
                if (Numbers[j] > Numbers[j + 1]){
                    int temp = Numbers[j];
                    Numbers[j] = Numbers[j + 1];
                    Numbers[j + 1] = temp;
                }
            }
        }
    
        for (int i = 0; i < 5; i++){
            printf("Sorted Number: %d \n", Numbers[i]);
        }

        break;
    }
}