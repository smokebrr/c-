#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char tipo;
    float x,y,z;

    do {
        printf("Voce quer fazer uma multiplicacao? ");
        printf("Digite `S` para sim e `N` para nao:\n");
        scanf(" %c", &tipo);

        if (tipo != 'S' && tipo != 's' && tipo != 'N' && tipo != 'n') {
            printf("Opcao invalida! Por favor, digite 'S' para sim ou 'N' para nao.\n\n");
        }
    } while (tipo != 'S' && tipo != 's' && tipo != 'N' && tipo != 'n');

    if (tipo == 'S' || tipo == 's' ) {
        printf("Digite o primeiro numero para a multiplicacao: \n");
        scanf("%f",&x);
        printf("Digite o segundo numero para a multiplicacao: \n");
        scanf("%f",&y);
        z = x*y;
        printf("Resultado: %.2f\n", z);
    } else {
        printf("Ok, nenhuma multiplicacao sera feita.\n");
    }

    return 0;
}