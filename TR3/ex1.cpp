#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int op;
    float x, y, z;

    do {
        system("cls");
        printf("=========================================\n");
        printf("=         DIGITE A OPCAO DESEJADA       =\n");
        printf("=                                       =\n");
        printf("= 1 - PARA CALCULO DA RAIZ QUADRADA     =\n");
        printf("= 2 - PARA CALCULO DE POTENCIALIZACAO   =\n");
        printf("= 3 - PARA CALCULO DO SENO              =\n");
        printf("= 4 - PARA CALCULO DO LOGARITMO         =\n");
        printf("= 5 - PARA CALCULO DO COSSENO           =\n");
        printf("= 6 - PARA CALCULO DA TANGENTE          =\n");
        printf("= 7 - PARA CALCULO DE MULTIPLICACAO     =\n");
        printf("= 0 - SAIR                              =\n");
        printf("=========================================\n");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("=========================================\n");
                printf("=    CALCULO DA RAIZ QUADRADA           =\n");
                printf("=========================================\n");
                printf("DIGITE O VALOR PARA CALCULO DA RAIZ QUADRADA: ");
                scanf("%f", &x);
                z = sqrt(x);
                printf("\nA RAIZ QUADRADA DO VALOR %.2f E: %.2f\n", x, z);
                system("pause");
                break;

            case 2:
                printf("=========================================\n");
                printf("=    CALCULO DE POTENCIALIZACAO         =\n");
                printf("=========================================\n");
                printf("DIGITE O VALOR PARA CALCULO DA POTENCIA: ");
                scanf("%f", &x);
                printf("DIGITE O VALOR DO EXPOENTE: ");
                scanf("%f", &y);
                z = pow(x, y);
                printf("\nA POTENCIA DO VALOR %.2f COM EXPOENTE %.2f E: %.2f\n", x, y, z);
                system("pause");
                break;

            case 3:
                printf("=========================================\n");
                printf("=       CALCULO DO SENO                 =\n");
                printf("=========================================\n");
                printf("DIGITE O ANGULO PARA CALCULO DO SENO: ");
                scanf("%f", &x);
                z = sin(x);
                printf("\nO ANGULO %.2f TEM O SENO DE: %.2f\n", x, z);
                system("pause");
                break;

            case 4:
                printf("=========================================\n");
                printf("=       CALCULO DO LOGARITMO            =\n");
                printf("=========================================\n");
                printf("DIGITE O VALOR PARA CALCULO DO LOGARITMO: ");
                scanf("%f", &x);
                z = log(x);
                printf("\nO VALOR DO %.2f TEM O LOGARITMO: %.2f\n", x, z);
                system("pause");
                break;

            case 5:
                printf("=========================================\n");
                printf("=       CALCULO DO COSSENO              =\n");
                printf("=========================================\n");
                printf("DIGITE O ANGULO PARA CALCULO DO COSSENO: ");
                scanf("%f", &x);
                z = cos(x);
                printf("\nO ANGULO %.2f TEM O COSSENO: %.2f\n", x, z);
                system("pause");
                break;

            case 6:
                printf("=========================================\n");
                printf("=       CALCULO DA TANGENTE             =\n");
                printf("=========================================\n");
                printf("DIGITE O ANGULO PARA CALCULO DA TANGENTE: ");
                scanf("%f", &x);
                z = tan(x);
                printf("\nO ANGULO %.2f TEM A TANGENTE: %.2f\n", x, z);
                system("pause");
                break;

            case 7:
                printf("=========================================\n");
                printf("=       CALCULO DE MULTIPLICACAO        =\n");
                printf("=========================================\n");
                printf("DIGITE UM VALOR PARA CALCULO DE MULTIPLICACAO: ");
                scanf("%f", &x);
                printf("DIGITE OUTRO VALOR PARA CALCULO DE MULTIPLICACAO: ");
                scanf("%f", &y);
                z = x * y;
                printf("\nA MULTIPLICACAO DE %.2f POR %.2f E: %.2f\n", x, y, z);
                system("pause");
                break;

            case 0:
                printf("\nSAIR\n");
                break;

            default:
                printf("\nDIGITE UMA OPCAO VALIDA!\n");
                system("pause");
                break;
        }

    } while (op != 0);

    return 0;
}