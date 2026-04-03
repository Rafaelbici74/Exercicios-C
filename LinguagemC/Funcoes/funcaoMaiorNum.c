// Escreva uma função que calcule qual o maior de dois inteiros.

#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){

    if (a > b)
        printf("O maior numero é: %d", a);

        // Use RETURN para encerrar a função e mostrar somente a variavel A caso ela fosse maior
        // Ex: if (a > b)
        // return a;

    else if (b > a)
        printf("O maior numero é: %d", b);

    else
        printf("Os numeros são iguais!");
}

int main(){

    int n, n2;

    printf("Digite um numero inteiro: "); scanf("%d", &n);

    putchar('\n');

    printf("Digite outro numero inteiro: "); scanf("%d", &n2);

    putchar('\n'); putchar('\n');

    maior(n, n2);
    

}