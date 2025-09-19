#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;  // Usando double p/ maior precisão
    int pontosTuristicos1, pontosTuristicos2;
    int score1 = 0, score2 = 0; // Contadores de vitórias

    // Entrada da primeira carta
    printf("=== Cadastro da Primeira Carta ===\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada da segunda carta
    printf("\n=== Cadastro da Segunda Carta ===\n");
    printf("Digite o código da cidade (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Comparações
    printf("\n=== Comparação das Cartas ===\n");

    // População
    if (populacao1 > populacao2) {
        printf("Cidade %s tem maior população.\n", codigo1);
        score1++;
    } else if (populacao2 > populacao1) {
        printf("Cidade %s tem maior população.\n", codigo2);
        score2++;
    } else {
        printf("Empate em população.\n");
    }

    // Área
    if (area1 > area2) {
        printf("Cidade %s tem maior área.\n", codigo1);
        score1++;
    } else if (area2 > area1) {
        printf("Cidade %s tem maior área.\n", codigo2);
        score2++;
    } else {
        printf("Empate em área.\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("Cidade %s tem maior PIB.\n", codigo1);
        score1++;
    } else if (pib2 > pib1) {
        printf("Cidade %s tem maior PIB.\n", codigo2);
        score2++;
    } else {
        printf("Empate em PIB.\n");
    }

    // Pontos turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Cidade %s tem mais pontos turísticos.\n", codigo1);
        score1++;
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Cidade %s tem mais pontos turísticos.\n", codigo2);
        score2++;
    } else {
        printf("Empate em pontos turísticos.\n");
    }

    // Resultado final
    printf("\n=== Resultado Final ===\n");
    if (score1 > score2) {
        printf("A cidade vencedora é: %s com %d atributos vencidos!\n", codigo1, score1);
    } else if (score2 > score1) {
        printf("A cidade vencedora é: %s com %d atributos vencidos!\n", codigo2, score2);
    } else {
        printf("As duas cidades empataram no placar geral!\n");
    }

    return 0;
}