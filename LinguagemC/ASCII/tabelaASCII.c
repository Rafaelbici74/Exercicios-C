#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;

    for(i = 25; i <= 127; i++){

        printf("%3d => %c\n", i, (char) i );

            // (char) i ); para transformar a variavel i em char (caractere) no pritf
    }
}