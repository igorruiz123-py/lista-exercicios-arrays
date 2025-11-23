#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Algoritmo de imprimir nomes na tela e verificar se o nome é feminino ou masculino (de maneira simplificada)
// Exemplo: o nome só pode terminar com o "O" ou com "A", se terminar com "O" é masculino se o nome terminar com "A" é feminino, 
// imprimir erro se não terminar com "A" nem com "O" ou se o usuário digitar números  
// Aprendendo a manipular strings, laço for, básico de array
// Função fgets()
// Validações de entrada


int main(){

    while (1){
        char name[1024];
        char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};
        bool NumberFound = false;
        
        printf("Digite um nome: ");
        fgets(name, sizeof(name), stdin);

        for (int i = 0; name[i] != '\0'; i++){
            for (int j = 0; j <= 10; j++){
                if (name[i] == numbers[j]){
                    NumberFound = true;
                    break;
                }
            }

        }

        if (NumberFound){
            printf("Um numero foi encontrado! \n");
            NumberFound = false;
            continue;
        }
        
        int temp1 = strlen(name);
        int temp2= 2;
        int temp3 = temp1 - temp2;
        char LastChar = name[temp3];
        
        if (LastChar != 'a' && LastChar != 'o'){
            printf("O nome deve terminar com 'a' ou 'o'! \n");
            continue;
        }

        else if (LastChar == 'a'){
            printf("O nome e feminino! \n");
        }

        else if (LastChar == 'o'){
            printf("O nome e masculino! \n");
        }

        break;
        
    }

    return 0;
}