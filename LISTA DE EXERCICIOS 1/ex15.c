#include <stdio.h>

int main() {

    int v1, v2, val;

    printf("Insina o valor A:");
    scanf("%d", &v1);
   
    fflush(stdin);
    printf("Insira o valor B:");
    scanf("%d", &v2);

    val = v2;
    v2 = v1;
   
    printf("O valor de A se tornou: %d !\n", val);
    printf("O valor de B se tornou: %d !\n", v2);
    
    return 0;
}