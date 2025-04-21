#include <stdio.h>

int main(){

    int idade;
    
    printf("digite sua idade ");
    scanf ("%d" , &idade);

    for (int i = 1; i <= idade; i++)
    {
        printf("%d \n",idade);
    }
    return 0;




}