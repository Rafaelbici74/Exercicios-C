//escreva um programa que solicite ao usuario um numero e escreva simuntaneamente a sequencia crescente e decrescente entre 1 e esse numero

#include <stdio.h>
#include <stdlib.h>

int main(){

    int res;
    int i, o;
    

    printf("Digite um valor: ");
    scanf("%d", &res);
    o = res;
    
    for(i = 1; i <= res; ++i){
     
        printf("%2d     %2d\n", i, o );
        o = res - i;
    }

}