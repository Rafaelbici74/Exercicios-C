#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;


    for(i = 1; i <= 100; i++)

    if(i == 60)
        break;
    else
        if(i % 2 == 1) //se i/2 tiver resto 1 é impar, ignora
        continue;
    else
        printf("%2d\n", i);

    printf("FIM DO LAÇO");

}

// vai fazer a repetição de I atém 100 (laço for)
// se I = 60, acaba
// Senão (else) se I/2 e tiver sobra de 1, ele ignora(continue)
// senão (else) vai escrever na tela o I (printf)

// após I atingir 60 (break declarado antes), fim do laço