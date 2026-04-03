// O que fazer:
// Peça ao usuário para digitar 10 números e mostre qual foi o maior número digitado.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0, maior = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &n);

        if (i == 1){

            maior = n;

        }

        if (n > maior){

            maior = n;

        }
    }

    printf("O maior numero digitado foi: %d", maior);
}