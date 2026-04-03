#include <stdio.h>
#include <stdlib.h>

int main(){

    char opcao;

    do{
    printf("MENU PRINCIPAL\n\n");
    printf("Clientes\n");
    printf("Fornecedores\n");
    printf("Encomendas\n");
    printf("Sair\n");
    printf("\nQual opção você deseja escolher? ");
    scanf("%c", &opcao);
    fflush(stdin);

    switch (opcao){

        case 'C':
        case 'c': puts("Opção Clientes escolhido!\n\n"); break;

        case 'F':
        case 'f': puts("Opção Fornecedores escolhido!\n\n"); break;

        case 'E':
        case 'e': puts("Opção Encomendas escolhido\n\n"); break;

        case 'S':
        case 's': break;

        default: puts("Opção invalida!!!\n\n");
    }  
        getchar();
    }

    while (opcao != 's' &&  opcao != 'S');


}