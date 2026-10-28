#include <stdio.h>

#define TAM 10

int main() {
    // Array que armazena dez temperaturas.
    float temperaturas[TAM];
    float auxiliar;
    int i, j;

    printf("========================================\n");
    printf("   SISTEMA DE CONTROLE DE TEMPERATURAS\n");
    printf("             Bubble Sort\n");
    printf("========================================\n");

    // Recebe as dez temperaturas do usuario.
    for (i = 0; i < TAM; i++) {
        printf("Digite a temperatura %d (em Celsius): ", i + 1);

        if (scanf("%f", &temperaturas[i]) != 1) {
            printf("Erro: digite um valor numerico.\n");
            return 1;
        }
    }

    // Mostra os valores antes da ordenacao.
    printf("\nTemperaturas antes da ordenacao:\n");

    for (i = 0; i < TAM; i++) {
        printf("%.2f graus Celsius\n", temperaturas[i]);
    }

    // Bubble Sort: compara elementos vizinhos.
    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - 1 - i; j++) {

            // Se o atual for maior que o proximo, troca.
            if (temperaturas[j] > temperaturas[j + 1]) {
                auxiliar = temperaturas[j];
                temperaturas[j] = temperaturas[j + 1];
                temperaturas[j + 1] = auxiliar;
            }
        }
    }

    // Mostra os valores depois da ordenacao.
    printf("\nTemperaturas em ordem crescente:\n");

    for (i = 0; i < TAM; i++) {
        printf("%.2f graus Celsius\n", temperaturas[i]);
    }

    printf("\nOrdenacao concluida com sucesso!\n");

    return 0;
}
