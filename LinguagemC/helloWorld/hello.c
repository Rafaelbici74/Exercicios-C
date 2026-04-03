#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, valor2;

    printf("Digite um numero: ");
    scanf("%d",&valor);

    printf("\nDigite o segundo numero: ");
    scanf("%d",&valor2);

    printf("\nA soma dos seus numeros é: %d + %d = %d \n", valor, valor2, valor+valor2);

    // não fechar o exe ao abrir
    system("pause");
}