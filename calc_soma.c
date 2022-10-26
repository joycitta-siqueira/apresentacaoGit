#include <stdio.h>
#include <stdlib.h>

int main (){

float n1, n2;
char op;

printf("Digite um numero: ");
scanf("%f", & n1);

printf("Digite um numero: ");
scanf("%f", & n2);

printf("Digite uma operacao: ");
scanf(" %c", & op);

switch (op){
    case '+':
        printf("\nO resultado e: %f", n1 + n2);
        break;
    case '-' :
        printf("\nO resultado e: %f", n1 - n2);
        break;

        default:
            printf("\nOperacao invalida!");



}


    return 0;
}