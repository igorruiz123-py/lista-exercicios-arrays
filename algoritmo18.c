#include <stdio.h>
#include <stdbool.h>

// leia 10 valores inteiros e os armazene em um vetor;
// inverta a ordem dos elementos no pr´oprio vetor (o primeiro troca com o ´ultimo, o segundo com o pen´ultimo, e assim por diante);
// imprima o vetor ap´os a invers˜ao.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

void InverteArray(int *arr, int len){

    for (int l = 0,  r = len - 1; l < r; l++, r--){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }

    printf("Inverted Number: \n");

    printf("\n");

    for (int i = 0; i < len; i++){
        printf("%d \n", arr[i]);
    }
}

int VerifyData(int *arr, int len){

    for (int i = 0; i < len; i++){
        printf("Enter a number: ");
        if (scanf(" %d", &arr[i]) == 0){
            FlushBuffer();
            return 0;
        }
    }

    printf("\n");

    return 1;
}

int main(){

    while(true){

        int arr[10];
        int len = sizeof(arr) / sizeof(arr[0]);

        if (VerifyData(arr, len)){
            InverteArray(arr, len);
            break;
        }
        else {
            printf("Invalid entry! \n");
            continue;
        }

    }
}