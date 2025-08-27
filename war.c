#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
struct Territorio {
    char nome[30];    // Nome do território
    char cor[15];     // Cor do exército
    int tropas;       // Número de tropas
};

int main() {
    struct Territorio territorios[5];  // Vetor estático para armazenar 5 territórios
    int i;

    printf("===== Cadastro Inicial dos Territórios =====\n");

    // Cadastro dos territórios
    for (i = 0; i < 5; i++) {
        printf("\n--- Território %d ---\n", i + 1);

        // Leitura do nome com fgets
        printf("Digite o nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove o \n do final

        // Leitura da cor
        printf("Digite a cor do exército: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        // Leitura do número de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // consome o ENTER que sobra no buffer
    }

    // Exibição dos territórios cadastrados
    printf("\n===== Estado Atual do Mapa =====\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Número de Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
