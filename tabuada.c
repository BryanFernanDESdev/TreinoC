#include <stdio.h>

void tabuada(){
    
    int numero;
    int i=1;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    while (i<=10)
    
    {
        printf("%d x %d = %d\n", numero, i, numero*i);
        i++;
    }

}
int main(){

    tabuada();

    return 0;
}   