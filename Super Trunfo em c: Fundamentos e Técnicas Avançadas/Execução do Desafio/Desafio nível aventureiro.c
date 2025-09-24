#include <stdio.h>

/**
 * Função: limpar_buffer
 * Descrição: Limpa o buffer do teclado após cada leitura de dados
 * Parâmetros: Nenhum
 */
void limpar_buffer() {
    getchar();
}

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4]; // Ex: "A01" + caractere nulo '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1; // Nova variável para densidade populacional
    float pibPerCapita1; // Nova variável para PIB per capita

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2; // Nova variável para densidade populacional
    float pibPerCapita2; // Nova variável para PIB per capita

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (Ex: SP): ");
    scanf(" %c", &estado1);
    limpar_buffer();

    printf("Digite o Código da Carta (Ex: A01): ");
    scanf("%s", codigo1);
    limpar_buffer();

    printf("Digite o Nome da Cidade (Ex: Ceara): ");
    scanf("%s", cidade1);
    limpar_buffer();

    printf("Digite a População (Ex: 12345678): ");
    scanf("%d", &populacao1);
    limpar_buffer();

    printf("Digite a Área (em km²) (Ex: 1234.5678): ");
    scanf("%f", &area1);
    limpar_buffer();

    printf("Digite o PIB (em bilhões) (Ex: 1234.5678)): ");
    scanf("%f", &pib1);
    limpar_buffer();

    printf("Digite o Número de Pontos Turísticos (Ex: 12345678)): ");
    scanf("%d", &pontosTuristicos1);
    limpar_buffer();

    // Cálculos para a Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // Convertendo bilhões para reais

    printf("\n"); // Adiciona uma linha em branco para separar os cadastros

    // --- Cadastro da Carta 2 ---
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (A-H) (Ex: RJ): ");
    scanf(" %c", &estado2);
    limpar_buffer();

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    limpar_buffer();

    printf("Digite o Nome da Cidade (Ex: Fortaleza): ");
    scanf("%s", cidade2);
    limpar_buffer();

    printf("Digite a População (Ex: 12345678)): ");
    scanf("%d", &populacao2);
    limpar_buffer();

    printf("Digite a Área (em km²) (Ex: 1234.5678)): ");
    scanf("%f", &area2);
    limpar_buffer();

    printf("Digite o PIB (em bilhões) (Ex: 1234.5678): ");
    scanf("%f", &pib2);
    limpar_buffer();

    printf("Digite o Número de Pontos Turísticos (Ex: 12345678): ");
    scanf("%d", &pontosTuristicos2);
    limpar_buffer();

    // Cálculos para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; // Convertendo bilhões para reais

    printf("\n\n--- Cartas Cadastradas ---\n\n");

    // --- Exibição dos dados da Carta 1 ---
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n"); // Adiciona uma linha em branco para separar as cartas

    // --- Exibição dos dados da Carta 2 ---
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
