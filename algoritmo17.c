#include <stdio.h>
#include <stdbool.h>

// leia um vetor de 10 n´umeros inteiros;
// verifique se o vetor ´e um pal´ındromo, ou seja, se o primeiro elemento ´e igual ao ´ultimo, o segundo igual ao pen´ultimo, e assim por diante;
// exiba uma mensagem indicando se o vetor ´e ou n˜ao um pal´ındromo.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int IsPalindrome(int *arr, int len){

    for (int i = 0; i < len / 2; i++){
        if (arr[i] != arr[len - i - 1]){
            return 0;
        }
    }

    return 1;
}

int main(){

    while(true){

        int arr[10];
        int len = sizeof(arr) / sizeof(arr[0]);
        bool CharFound = false;
        
        for (int i = 0; i < len; i++){
            printf("Enter Number: ");
            if (scanf(" %d", &arr[i]) == 0){
                CharFound = true;
                FlushBuffer();
            }
        }

        printf("\n");

        if (CharFound){
            printf("Invalid entry! \n");
            continue;
        }

        if (IsPalindrome(arr, len)){
            printf("The array is palindrome! \n");
        }
        else {
            printf("The array is not palindrome! \n");
        }

        break;

    }
}