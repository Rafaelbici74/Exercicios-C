// Escreva um programa que solicite um numero e um caractere. em seguida, terá que preencher N linhas, cada uma delas com N caracteres


#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, i, j;
    char n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um caractere: ");
    scanf(" %c", &n2);

        for(i = 1; i <= n1; i++){ //vai fazer as linhas até a quantidade de vezes que o usuario digitou

            for(j = 1; j <= n1; j++){ //vai escrever o char de acordo com quantas vezes o usuario digitou

               printf("%c", n2);
               
 
            } // ao escrever N1 vezes o CHAR digitado, o programa da um putchar pra pular uma linha
            // e começa a repetição até atingir o numero de vezes digitado pelo o usuario

            putchar('\n');
        }
}