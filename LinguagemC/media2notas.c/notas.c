#include <stdio.h>
#include <stdlib.h>

int main(){

    int nota, nota2;
    int media;

    printf("\nDigite a primeira nota: ");
    scanf("%d", &nota);

    printf("\nDigite a segunda nota: ");
    scanf("%d", &nota2);

    media = (nota + nota2) / 2;

    printf("\nA media das duas notas é: %d", media);

}