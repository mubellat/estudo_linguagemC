#include <stdio.h>

int main(){

    int num1, num2;

    printf("Insira um número:\n");
    scanf("%d",&num1);

    fflush(stdin);
    printf("Insira outro número:\n");
    scanf("%d",&num2);
    
    printf("Seu primeiro número foi %d e o segundo foi %d.",num1,num2);
    return 0;
}