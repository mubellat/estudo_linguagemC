#include <stdio.h>

int main(){

    int num1, num2;

    printf("Insira um n�mero:\n");
    scanf("%d",&num1);

    fflush(stdin);
    printf("Insira outro n�mero:\n");
    scanf("%d",&num2);
    
    printf("Seu primeiro n�mero foi %d e o segundo foi %d.",num1,num2);
    return 0;
}