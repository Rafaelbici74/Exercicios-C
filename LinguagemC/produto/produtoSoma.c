#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, numero, soma, produto;
    soma = 0;
    numero = 0;

    // OBJETIVO: calcule a soma e o produto dos N primeiros numeros naturais.
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(n=produto=1; n <= numero; n++){
    
        soma = soma + n;
        produto = produto * n;

    } 


    printf("SOMA: %d\n", soma);
    printf("PRODUTO: %d\n", produto);


    // Como se calcula um produto? exemplo prático: usuario digitou 5
    // 
    // se N é igual a PRODUTO e PRODUTO é igual a 1
    // 
    // faz: N*produto, até N valer o numero que o usuario digitou (5)
    // 
    // 1x1, 1x2, 2x3, 6x4, 24x5 = 120, este é o produto do numero 5 

    // SOMA a mesma coisa, mas em ADIÇÃO: usuario digitou 5
    // 
    // soma = 0, N = 1: soma+n = 1, soma(1)+n(2) = 3 e assim por diante

   
}

// RESULTADO ESPERADO AO DIGITAR 5: SOMA 15 E PRODUTO 120