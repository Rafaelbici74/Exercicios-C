#include <stdio.h>
#include <stdlib.h>

void linha(int num, char ch){

    int i;

    for( i = 1; i <= num; i++){
        putchar(ch);
    }
}


int main(){

    linha(3, 'r');
            putchar('\n');

    linha(5, 'a');
            putchar('\n');

    linha(7, 'f');
            putchar('\n');

    linha(5, 'a');
            putchar('\n');

    linha(3, 'a');
}