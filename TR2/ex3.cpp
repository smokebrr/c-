#include<stdio.h>
#include<locale.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int l1, l2, l3;
    printf("Informe o 1º lado: ");
    scanf("%d", &l1);
    printf("Informe o 2º lado: ");
    scanf("%d", &l2);
    printf("Informe o 3º lado: ");
    scanf("%d", &l3);
    if((l1 > l2 + l3 ) || (l2 > l1 + l3) || (l3 > l1 + l2)){
        printf("Os lados informados não formam um triângulo!\n");
    }else{
        if((l1 == l2) && (l1 == l3)){
            printf("Triângulo equilátero!\n");
        }else{
            if((l1 != l2) && (l1 != l3) && (l2 != l3)){
                printf("Triângulo escaleno!\n");
            }else{
                printf("Triângulo isósceles!\n");
            }
        }
    }
}
