#include <stdio.h>
#include <locale.h>

int main(void) { // � uma boa pr�tica definir o tipo de retorno da main
    setlocale(LC_ALL, "Portuguese");

    char tipo_combustivel; // CORRIGIDO: char para uma �nica letra
    float litros_qtd;
    float preco_final;

    // Constantes para os pre�os por litro
    const float PRECO_ALCOOL = 3.49;
    const float PRECO_GASOLINA = 5.49;

    printf("Qual combust�vel voc� deseja?\n A - �lcool\n G - Gasolina\nSua escolha: ");
    // CORRIGIDO: scanf para ler um �nico caractere. O espa�o antes de %c � importante!
    scanf(" %c", &tipo_combustivel); 

    printf("Digite quantos litros voc� vai querer: ");
    scanf("%f", &litros_qtd);

    // Estrutura para decidir o que fazer com base na escolha
    if (tipo_combustivel == 'A' || tipo_combustivel == 'a') {
        
        // Calcula o pre�o bruto primeiro
        preco_final = litros_qtd * PRECO_ALCOOL;

        // Agora, aplica o desconto sobre o pre�o bruto
        if (litros_qtd <= 20) {
            // Desconto de 3%
            preco_final = preco_final * (1 - 0.03); // ou preco_final * 0.97
            printf("\nDesconto de 3%% aplicado.\n");
        } else {
            // Desconto de 5% (para mais de 20 litros)
            preco_final = preco_final * (1 - 0.05); // ou preco_final * 0.95
            printf("\nDesconto de 5%% aplicado.\n");
        }

        // CORRIGIDO: printf com formata��o correta
        printf("O valor a pagar pelo �lcool �: R$ %.2f\n", preco_final);

    } else if (tipo_combustivel == 'G' || tipo_combustivel == 'g') {
        
        // Gasolina n�o tem desconto no seu exemplo, ent�o o c�lculo � direto
        preco_final = litros_qtd * PRECO_GASOLINA;
        printf("O valor a pagar pela gasolina �: R$ %.2f\n", preco_final);

    } else {
        printf("Op��o de combust�vel inv�lida!\n");
    }

    return 0; // Boa pr�tica para indicar que o programa terminou com sucesso
}
