#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=4;
    int o=4;

    printf("%d\n", i++); //a variavel i é escrita (valor 4), depois o i++ incrementa
    printf("%d\n", ++i); //a variavel i é escrita (valor 5), mas o ++i incrementa antes de printar para o usuario

    printf("%d", o++ + ++o); //rultado somando os dois comandos em um printf, a variavel vale 4, i++ + ++i, sendo assim, incrementa tudo e  printa para o usuario, virando 10:
                             //exemplo escrito: 4, 4+1 + 5+1 


                             //dentro de um laço de repetição, mesmo se for falso, será incrementado ou decrementado.

}