#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Função para exibir o menu de atributos
void exibirMenu(int excluido) {
    printf("\n=== MENU DE ATRIBUTOS ===\n");
    if (excluido != 1) printf("1 - População\n");
    if (excluido != 2) printf("2 - Área\n");
    if (excluido != 3) printf("3 - PIB\n");
    if (excluido != 4) printf("4 - Pontos Turísticos\n");
    if (excluido != 5) printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção: ");
}

// Função para obter o valor de um atributo
float obterValor(int opcao, int pop, float area, double pib, int pontos) {
    switch (opcao) {
        case 1: return (float) pop;            // População
        case 2: return area;                   // Área
        case 3: return (float) pib;            // PIB
        case 4: return (float) pontos;         // Pontos turísticos
        case 5: return pop / area;             // Densidade demográfica
        default: return -1; // inválido
    }
}

// Função para exibir o nome do atributo
const char* nomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Inválido";
    }
}

int main() {
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontos1, pontos2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Primeira Carta ===\n");
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Segunda Carta ===\n");
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Escolha dos atributos
    int opcao1, opcao2;
    exibirMenu(0);
    scanf("%d", &opcao1);

    exibirMenu(opcao1); // exclui o primeiro atributo
    scanf("%d", &opcao2);

    // Pega valores correspondentes
    float valor1A = obterValor(opcao1, populacao1, area1, pib1, pontos1);
    float valor2A = obterValor(opcao1, populacao2, area2, pib2, pontos2);

    float valor1B = obterValor(opcao2, populacao1, area1, pib1, pontos1);
    float valor2B = obterValor(opcao2, populacao2, area2, pib2, pontos2);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    // Comparação do primeiro atributo
    printf("\nAtributo 1: %s\n", nomeAtributo(opcao1));
    printf("%s: %.2f | %s: %.2f\n", nome1, valor1A, nome2, valor2A);
    if (opcao1 == 5) { // Densidade -> menor vence
        (valor1A < valor2A) ? printf("Vencedor: %s\n", nome1) :
        (valor2A < valor1A) ? printf("Vencedor: %s\n", nome2) :
        printf("Empate!\n");
    } else {
        (valor1A > valor2A) ? printf("Vencedor: %s\n", nome1) :
        (valor2A > valor1A) ? printf("Vencedor: %s\n", nome2) :
        printf("Empate!\n");
    }

    // Comparação do segundo atributo
    printf("\nAtributo 2: %s\n", nomeAtributo(opcao2));
    printf("%s: %.2f | %s: %.2f\n", nome1, valor1B, nome2, valor2B);
    if (opcao2 == 5) {
        (valor1B < valor2B) ? printf("Vencedor: %s\n", nome1) :
        (valor2B < valor1B) ? printf("Vencedor: %s\n", nome2) :
        printf("Empate!\n");
    } else {
        (valor1B > valor2B) ? printf("Vencedor: %s\n", nome1) :
        (valor2B > valor1B) ? printf("Vencedor: %s\n", nome2) :
        printf("Empate!\n");
    }

    // Soma final dos atributos
    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    printf("\n=== SOMA FINAL DOS ATRIBUTOS ===\n");
    printf("%s: %.2f | %s: %.2f\n", nome1, soma1, nome2, soma2);

    (soma1 > soma2) ? printf("Vencedor da rodada: %s\n", nome1) :
    (soma2 > soma1) ? printf("Vencedor da rodada: %s\n", nome2) :
    printf("Empate!\n");

    return 0;
}