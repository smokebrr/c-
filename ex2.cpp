#include <stdio.h>
#include <locale.h>

int main(void) { // É uma boa prática definir o tipo de retorno da main
    setlocale(LC_ALL, "Portuguese");

    char tipo_combustivel; // CORRIGIDO: char para uma única letra
    float litros_qtd;
    float preco_final;

    // Constantes para os preços por litro
    const float PRECO_ALCOOL = 3.49;
    const float PRECO_GASOLINA = 5.49;

    printf("Qual combustível você deseja?\n A - Álcool\n G - Gasolina\nSua escolha: ");
    // CORRIGIDO: scanf para ler um único caractere. O espaço antes de %c é importante!
    scanf(" %c", &tipo_combustivel); 

    printf("Digite quantos litros você vai querer: ");
    scanf("%f", &litros_qtd);

    // Estrutura para decidir o que fazer com base na escolha
    if (tipo_combustivel == 'A' || tipo_combustivel == 'a') {
        
        // Calcula o preço bruto primeiro
        preco_final = litros_qtd * PRECO_ALCOOL;

        // Agora, aplica o desconto sobre o preço bruto
        if (litros_qtd <= 20) {
            // Desconto de 3%
            preco_final = preco_final * (1 - 0.03); // ou preco_final * 0.97
            printf("\nDesconto de 3%% aplicado.\n");
        } else {
            // Desconto de 5% (para mais de 20 litros)
            preco_final = preco_final * (1 - 0.05); // ou preco_final * 0.95
            printf("\nDesconto de 5%% aplicado.\n");
        }

        // CORRIGIDO: printf com formatação correta
        printf("O valor a pagar pelo álcool é: R$ %.2f\n", preco_final);

    } else if (tipo_combustivel == 'G' || tipo_combustivel == 'g') {
        
        // Gasolina não tem desconto no seu exemplo, então o cálculo é direto
        preco_final = litros_qtd * PRECO_GASOLINA;
        printf("O valor a pagar pela gasolina é: R$ %.2f\n", preco_final);

    } else {
        printf("Opção de combustível inválida!\n");
    }

    return 0; // Boa prática para indicar que o programa terminou com sucesso
}
