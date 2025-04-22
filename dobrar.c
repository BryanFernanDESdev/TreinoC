#include <stdio.h>

int dobrar( int numero){
    return numero * 2;

}
int main(){
    
    int numero;
    printf("digite um numero");
    scanf("%d", &numero);
    printf("o dobro de %d é %d", numero, dobrar(numero));
    return 0;

}