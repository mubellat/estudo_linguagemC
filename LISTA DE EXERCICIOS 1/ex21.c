#include <stdio.h>

int main () {

    int min, hora, total;

    printf("Informe quantas horas são: ");
    scanf("%d", &hora);

    fflush(stdin);
    printf("informe os minutos: ");
    scanf("%d", &min);

    total = min + ( hora * 60 );

    printf("Se passaram %d minutos desde que o dia começou!", total);
    
    return 0;
}