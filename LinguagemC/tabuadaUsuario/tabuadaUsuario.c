#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor;
    valor = 0;

    printf("Qual numero você quer ver a tabuada? ");
    scanf("%d", &valor);

    for(int  i = 1; i <= 10; i++){

        printf("%d x %d = %d\n", i, valor, i*valor);

    }

}