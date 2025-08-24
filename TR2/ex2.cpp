#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char tipo_combustivel;
    float litros_qtd;
    float preco_final;

    const float preco_alcool = 3.49;
    const float preco_gasolina = 5.49;

    printf("qual combustivel voce deseja?\n a - alcool\n g - gasolina: ");
    scanf(" %c", &tipo_combustivel);

    printf("digite quantos litros voce vai querer: ");
    scanf("%f", &litros_qtd);

    if (tipo_combustivel == 'A' || tipo_combustivel == 'a') {
        preco_final = litros_qtd * preco_alcool;

        if (litros_qtd <= 20) {
            preco_final = preco_final * (1 - 0.03);
            printf("\ndesconto de 3%% aplicado.\n");
        } else {
            preco_final = preco_final * (1 - 0.05);
            printf("\ndesconto de 5%% aplicado.\n");
        }

        printf("o valor a pagar pelo alcool e: R$ %.2f\n", preco_final);

    } else if (tipo_combustivel == 'G' || tipo_combustivel == 'g') {
        preco_final = litros_qtd * preco_gasolina;

        if (litros_qtd <= 20) {
            preco_final = preco_final * (1 - 0.04);
            printf("\ndesconto de 4%% aplicado.\n");
        } else {
            preco_final = preco_final * (1 - 0.06);
            printf("\ndesconto de 6%% aplicado.\n");
        }

        printf("o valor a pagar pela gasolina e: R$ %.2f\n", preco_final);

    } else {
        printf("opcao de combustivel invalida!\n");
    }

    return 0;
}
