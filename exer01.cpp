#include<stdio.h>

int main(){
    int a, b, soma;
    printf("Escreva dois numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);

    soma = a+b;
    printf("A soma entre os dois numeros é: %d\n", soma);
    return 0;
}