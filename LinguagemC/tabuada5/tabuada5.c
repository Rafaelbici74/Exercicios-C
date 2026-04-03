#include <stdio.h>
#include <stdlib.h>

int main(){

    int tab;
    tab = 5;

    printf("Tabuada do 5:\n");

    for(int i = 1;i<=10;i++){

        printf("%d x %d = %d\n", i, tab, i*tab);

    }

}