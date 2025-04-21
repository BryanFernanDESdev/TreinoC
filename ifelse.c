#include <stdio.h>

int main(){

    int idade;
    char nome[50];

    printf ("Digite seu nome: ");
    scanf ("%s", &nome);
    printf ("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade >= 18)
    {
        printf("voce tem %d entao voce é maior de idade e seu nome é %s",idade,nome);
    } else{
        printf("voce tem %d entao voce é menor de idade e seu nome é %s", idade, nome);
    }
    return 0;



}