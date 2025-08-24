#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int ano_nascimento;
    int tempo_trabalhado;
    int idade;

    printf("Insira seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Insira quantos anos voce ja trabalhou: ");
    scanf("%d", &tempo_trabalhado);


    idade = 2025 - ano_nascimento;
    if ((idade >= 65) || (tempo_trabalhado >= 30) || ((idade >= 60) && (tempo_trabalhado >= 25))) {
        printf("Pode aposentar!");
    } else {
        printf("Nao pode aposentar!");
    }

    return 0;
}