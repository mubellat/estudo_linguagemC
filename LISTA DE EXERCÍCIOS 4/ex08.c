#include<stdio.h>

int main(){
    int num ,cont = 0;
    float acumulador = 0;
    float media;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);

      if(num%2 == 0 && num != 0){ 
        cont++;  
        acumulador += num;
      }
      else {
        printf("O numero %d e impar\n", num);   
      }
    }
    while(num!=0);

    media = acumulador/cont;
    printf("A media dos numeros pares e: %.2f\n", media);
    return 0;
}