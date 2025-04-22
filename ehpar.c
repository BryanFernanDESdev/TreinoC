#include <stdio.h>

int ehpar( int numero){
    if (numero % 2 == 0){
        printf("Numero par\n");
        return 1;

    }
    else{
        printf("Numero impar\n");
        return 0;
    }

}
int main (){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
  printf("%d\n", ehpar(numero));
  return 0;

}