// O que fazer:
// Peça ao usuário um número N e mostre quantos números ímpares existem entre 1 e N.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0;
    int o = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);


    for(int i = 1; i <= n; i++){

        if(i % 2 == 1){

            o += 1;

        }
    }

    printf("O numeros impares até o %d é: %d", n, o);

}