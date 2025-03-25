#include <stdio.h>

int main()

{
    
    char nome1, nome2, nome3, nome4, nome5;
    int idade1, idade2, idade3, idade4, idade5;

    fflush(stdin);
    printf("Digite o primeiro nome:\n");
    scanf("%c",&nome1);
    printf("Digite idade:\n");
    scanf("%d",&idade1);

    fflush(stdin);
    printf("Digite o primeiro nome:\n");
    scanf("%c",&nome2);
    printf("Digite idade:\n");
    scanf("%d",&idade2);

    fflush(stdin);
    printf("Digite o primeiro nome:\n");
    scanf("%c",&nome3);
    printf("Digite idade:\n");
    scanf("%d",&idade3);

    fflush(stdin);
    printf("Digite o primeiro nome:\n");
    scanf("%c",&nome4);
    printf("Digite idade:\n");
    scanf("%d",&idade4);

    fflush(stdin);
    printf("Digite o primeiro nome:\n");
    scanf("%c",&nome5);
    printf("Digite idade:\n");
    scanf("%d",&idade5);

    printf("*********************************\n");
    printf("*\tNOME\t*\tIDADE\t*\n");
    printf("*********************************\n");
    printf("*\t%c\t*\t%d\t*\n",nome1,idade1);
    printf("*********************************\n");
    printf("*\t%c\t*\t%d\t*\n",nome2,idade2);
    printf("*********************************\n");
    printf("*\t%c\t*\t%d\t*\n",nome3,idade3);
    printf("*********************************\n");
    printf("*\t%c\t*\t%d\t*\n",nome4,idade4);
    printf("*********************************\n");
    printf("*\t%c\t*\t%d\t*\n",nome5,idade5);
    printf("*********************************\n");
    return 0;

}