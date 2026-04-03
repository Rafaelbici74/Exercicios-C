#include <stdio.h>
#include <stdlib.h>

int linha(){

    int i;

    for(i = 1; i <= 20; i++)

        putchar('*');
}

int main(){

    int i;

    linha();
        putchar('\n');
            puts("Numeros entre 1 e 5");
    linha();
        putchar('\n');
    for( i = 1; i<= 5; i++){

        printf("%d\n", i);

    }
    linha();
}