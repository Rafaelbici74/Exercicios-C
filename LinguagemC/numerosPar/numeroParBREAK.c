#include <stdlib.h>
#include <stdio.h>


int main(){

    for(int i = 1; i<= 100; i++)

        if (i == 30)
        break; // quando chega no 30, ele da BREAK e vai para a proxima instrução, sendo assim, ele vai fazer a repetição até o i*2.
        else

        printf("%d\n", i*2);

        printf("\nFIM DO LAÇO\n\n");
}

// Não está sendo usado {}, porquê todo o pragama está dentro do FOR. sendo assim, não é necessário {}