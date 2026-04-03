// O que fazer:
// Faça um programa que solicite ao usuário um número N e mostre todos os números pares de 1 até N.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){

        if (i % 2 == 0){
            printf("\n%d", i);
        }       
    }
}