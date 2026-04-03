#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    n = 0;

    for(int i = 1; i <= 5; i++){

        printf("Tabuada do %d\n\n", i);

        for(int ii = 1; ii <= 10; ii++){

            printf("%d x %d = %d\n", ii, i, ii*i);

        }

        // putchar recebe UM(1) caracter (entre aspas simples) e coloca na tela
        putchar('\n');
    }

}

