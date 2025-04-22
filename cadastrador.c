#include <stdio.h>


    int main (){

        char nome[30];
        int idade;
        int pessoas, i=0;
        
        printf ("quantas pessoas vc que cadastrar?\n");
        scanf("%d", &pessoas);
        while (i< pessoas)


        {
            printf("Digite seu nome: ");
            scanf("%s", nome);
            printf("Digite sua idade: ");
            scanf("%d", &idade);
                i++;
        }
        
        printf("voce cadastrou %d pessoas",pessoas);
        
        return 0;        
            
        
        
        
    



    }