#include <stdio.h>

int main(){

    int idade;
    char nome[50];

printf("Qual é seu nome? \n");
scanf("%s", &nome);
printf("Qual é sua idade? \n");
scanf("%d", &idade);

printf("seu nome é %s e vc tem %d de idade \n",nome,idade);
    
return 0;
}