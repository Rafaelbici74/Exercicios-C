#include <stdio.h>
#include <stdlib.h>

void linha1(){

    int i;

    for(i = 1; i <= 3; i++)
        putchar('*');  
}

void linha2(){

    int i;

    for(i = 1; i <= 5; i++)
        putchar('*');
}

void linha3(){

    int i;

    for(i = 1; i <= 7; i++)
        putchar('*');
}

void linha(int num){

    int i;

    for(i = 1; i <= num; i++)
        putchar('*');
}

int main(){

    linha1();
    putchar('\n');
    linha2();
    putchar('\n');
    linha3();
    putchar('\n');
    linha2();
    putchar('\n');
    linha1();

    putchar('\n');
    putchar('\n');

    linha(12);

}