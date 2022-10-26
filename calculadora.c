#include<stdio.h>
int main(){
    float n1, n2, mult, div;
    
    printf("Digite os numeros 1 e 2");
    scanf("%f%f", &n1, &n2);

    mult = n1 * n2;
    div = n1 / n2;

    printf("%f %f", mult, div);

}