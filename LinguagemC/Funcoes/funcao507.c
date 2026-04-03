// Escreva um programa que solicite dois numeros ao usuario e apresente na tela o resultado de sua soma
// e o dobro de cada um deles

#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){

    return  a + b;
}

int dobro(int a){

    return a * 2;
}


int main(){

    int n, n2;

    printf("Digite um numero: "); scanf("%d", &n);

        putchar('\n');

    printf("Digite outro numero: "); scanf("%d", &n2);
    
    
    printf("A soma dos numeros é: %d", soma(n, n2));

        putchar('\n');

    printf("A DOBRO dos numeros é: %d e %d", dobro(n), dobro(n2));
}

