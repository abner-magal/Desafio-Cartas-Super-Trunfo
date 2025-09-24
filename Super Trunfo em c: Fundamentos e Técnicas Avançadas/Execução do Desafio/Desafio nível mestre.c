// Inclui a biblioteca de entrada e saída padrão (Standard Input/Output).
// Ela é necessária para usar funções como printf (para imprimir na tela) e scanf (para ler do teclado).
#include <stdio.h> 

/**
 * Função: limpar_buffer
 * Descrição: Limpa o buffer (área de armazenamento temporário) do teclado.
 *            Isso é útil para remover caracteres indesejados, como o 'Enter' (\n),
 *            que podem interferir nas próximas leituras de dados.
 * Parâmetros: Nenhum
 */
void limpar_buffer() {
    // A função getchar() lê um único caractere do buffer de entrada.
    // Ao chamá-la aqui, consumimos o caractere '\n' (Enter) que sobrou da leitura anterior.
    getchar(); 
}

// A função main() é o ponto de entrada de todo programa em C. A execução começa aqui.
int main() {
    // --- Declaração de Variáveis para a Carta 1 ---
    char estado1;                   // Declara uma variável do tipo 'char' para armazenar um único caractere para o estado (ex: 'S').
    char codigo1[4];                // Declara um array de 'char' (string) para o código da carta (ex: "A01" mais o caractere nulo '\0').
    char cidade1[50];               // Declara um array de 'char' (string) para o nome da cidade, com espaço para até 49 caracteres mais o nulo.
    unsigned long int populacao1;   // Declara uma variável 'unsigned long int' para armazenar números de população grandes e não negativos.
    float area1;                    // Declara uma variável 'float' para armazenar a área, que pode ter casas decimais.
    float pib1;                     // Declara uma variável 'float' para armazenar o PIB, que também pode ter casas decimais.
    int pontosTuristicos1;          // Declara uma variável 'int' para armazenar um número inteiro de pontos turísticos.
    float densidadePopulacional1;   // Declara uma variável 'float' para o resultado do cálculo da densidade.
    float pibPerCapita1;            // Declara uma variável 'float' para o resultado do cálculo do PIB per capita.
    float superPoder1;              // Declara uma variável 'float' para o resultado do cálculo do "Super Poder".

    // --- Declaração de Variáveis para a Carta 2 (mesma lógica da Carta 1) ---
    char estado2;                   // Variável para o estado da Carta 2.
    char codigo2[4];                // Variável para o código da Carta 2.
    char cidade2[50];               // Variável para a cidade da Carta 2.
    unsigned long int populacao2;   // Variável para a população da Carta 2.
    float area2;                    // Variável para a área da Carta 2.
    float pib2;                     // Variável para o PIB da Carta 2.
    int pontosTuristicos2;          // Variável para os pontos turísticos da Carta 2.
    float densidadePopulacional2;   // Variável para a densidade populacional da Carta 2.
    float pibPerCapita2;            // Variável para o PIB per capita da Carta 2.
    float superPoder2;              // Variável para o Super Poder da Carta 2.

    // --- Bloco de Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n"); // Exibe um título para o usuário, indicando o início do cadastro da primeira carta.

    printf("Digite o Estado (Ex: SP): "); // Pede ao usuário para inserir a sigla do estado.
    scanf(" %c", &estado1);               // Lê um único caractere (%c) e o armazena na variável 'estado1'. O espaço antes de %c ignora espaços em branco ou 'Enter' anteriores.
    limpar_buffer();                      // Chama a função para limpar o buffer do teclado, removendo o 'Enter' que ficou da leitura.

    printf("Digite o Código da Carta (Ex: A01): "); // Pede ao usuário para inserir o código da carta.
    scanf("%s", codigo1);                          // Lê uma sequência de caracteres (string, %s) e armazena no array 'codigo1'.
    limpar_buffer();                               // Limpa o buffer novamente para a próxima leitura.

    printf("Digite o Nome da Cidade (Ex: Ceara): "); // Pede ao usuário para inserir o nome da cidade.
    scanf("%s", cidade1);                           // Lê a string do nome da cidade e armazena em 'cidade1'.
    limpar_buffer();                                // Limpa o buffer.

    printf("Digite a População (Ex: 12345678): "); // Pede ao usuário para inserir o número da população.
    scanf("%lu", &populacao1);                     // Lê um 'unsigned long int' (%lu) e armazena em 'populacao1'.
    limpar_buffer();                               // Limpa o buffer.

    printf("Digite a Área (em km²) (Ex: 1234.5678): "); // Pede ao usuário para inserir a área da cidade.
    scanf("%f", &area1);                               // Lê um número de ponto flutuante (%f) e armazena em 'area1'.
    limpar_buffer();                                   // Limpa o buffer.

    printf("Digite o PIB (em bilhões) (Ex: 1234.5678)): "); // Pede ao usuário para inserir o PIB da cidade.
    scanf("%f", &pib1);                                    // Lê um float (%f) e armazena em 'pib1'.
    limpar_buffer();                                       // Limpa o buffer.

    printf("Digite o Número de Pontos Turísticos (Ex: 12345678)): "); // Pede o número de pontos turísticos.
    scanf("%d", &pontosTuristicos1);                                // Lê um número inteiro (%d) e armazena em 'pontosTuristicos1'.
    limpar_buffer();                                                // Limpa o buffer.

    // --- Bloco de Cálculos para a Carta 1 ---
    // Calcula a densidade: população dividida pela área. O (float)populacao1 garante que a divisão seja de ponto flutuante para maior precisão.
    densidadePopulacional1 = (float)populacao1 / area1; 
    // Calcula o PIB per capita. Multiplica o PIB por 1 bilhão (1000000000.0) para obter o valor total antes de dividir pela população.
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 
    
    // Calcula o "Super Poder" somando vários atributos. O inverso da densidade (1.0 / densidade) é usado para que cidades menos densas (com mais espaço) pontuem mais.
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    printf("\n"); // Imprime uma linha em branco para melhorar a formatação da saída e separar os blocos de cadastro.

    // --- Bloco de Cadastro da Carta 2 (a lógica é idêntica à da Carta 1) ---
    printf("--- Cadastro da Carta 2 ---\n"); // Título para o cadastro da segunda carta.

    printf("Digite o Estado (A-H) (Ex: RJ): "); // Pede o estado da segunda carta.
    scanf(" %c", &estado2);                     // Lê o caractere do estado.
    limpar_buffer();                            // Limpa o buffer.

    printf("Digite o Código da Carta (ex: B02): "); // Pede o código da segunda carta.
    scanf("%s", codigo2);                           // Lê a string do código.
    limpar_buffer();                                // Limpa o buffer.

    printf("Digite o Nome da Cidade (Ex: Fortaleza): "); // Pede o nome da cidade da segunda carta.
    scanf("%s", cidade2);                            // Lê a string da cidade.
    limpar_buffer();                                 // Limpa o buffer.

    printf("Digite a População (Ex: 12345678)): "); // Pede a população da segunda carta.
    scanf("%lu", &populacao2);                      // Lê o unsigned long int da população.
    limpar_buffer();                                // Limpa o buffer.

    printf("Digite a Área (em km²) (Ex: 1234.5678)): "); // Pede a área da segunda carta.
    scanf("%f", &area2);                                // Lê o float da área.
    limpar_buffer();                                    // Limpa o buffer.

    printf("Digite o PIB (em bilhões) (Ex: 1234.5678): "); // Pede o PIB da segunda carta.
    scanf("%f", &pib2);                                     // Lê o float do PIB.
    limpar_buffer();                                        // Limpa o buffer.

    printf("Digite o Número de Pontos Turísticos (Ex: 12345678): "); // Pede os pontos turísticos da segunda carta.
    scanf("%d", &pontosTuristicos2);                                 // Lê o inteiro dos pontos turísticos.
    limpar_buffer();                                                 // Limpa o buffer.

    // --- Bloco de Cálculos para a Carta 2 ---
    densidadePopulacional2 = (float)populacao2 / area2; // Calcula a densidade populacional da Carta 2.
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; // Calcula o PIB per capita da Carta 2.
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2); // Calcula o Super Poder da Carta 2.

    printf("\n\n--- Cartas Cadastradas ---\n\n"); // Exibe um título para a seção de resultados, com espaçamento para clareza.

    // --- Bloco de Exibição dos dados da Carta 1 ---
    printf("Carta 1:\n");                                                 // Título para os dados da Carta 1.
    printf("Estado: %c\n", estado1);                                      // Exibe o caractere do estado da Carta 1.
    printf("Código: %s\n", codigo1);                                      // Exibe a string do código da Carta 1.
    printf("Nome da Cidade: %s\n", cidade1);                              // Exibe a string da cidade da Carta 1.
    printf("População: %lu\n", populacao1);                                // Exibe a população da Carta 1.
    printf("Área: %.2f km²\n", area1);                                     // Exibe a área formatada com 2 casas decimais (%.2f).
    printf("PIB: %.2f bilhões de reais\n", pib1);                         // Exibe o PIB formatado com 2 casas decimais.
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);        // Exibe o número de pontos turísticos.
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1); // Exibe a densidade calculada, formatada.
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);                 // Exibe o PIB per capita calculado, formatado.
    printf("Super Poder: %.2f\n", superPoder1);                           // Exibe o Super Poder calculado, formatado.

    printf("\n"); // Adiciona uma linha em branco para separar a exibição das duas cartas.

    // --- Bloco de Exibição dos dados da Carta 2 (lógica idêntica à da Carta 1) ---
    printf("Carta 2:\n");                                                 // Título para os dados da Carta 2.
    printf("Estado: %c\n", estado2);                                      // Exibe o estado da Carta 2.
    printf("Código: %s\n", codigo2);                                      // Exibe o código da Carta 2.
    printf("Nome da Cidade: %s\n", cidade2);                              // Exibe a cidade da Carta 2.
    printf("População: %lu\n", populacao2);                                // Exibe a população da Carta 2.
    printf("Área: %.2f km²\n", area2);                                     // Exibe a área da Carta 2.
    printf("PIB: %.2f bilhões de reais\n", pib2);                         // Exibe o PIB da Carta 2.
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);        // Exibe os pontos turísticos da Carta 2.
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2); // Exibe a densidade da Carta 2.
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);                 // Exibe o PIB per capita da Carta 2.
    printf("Super Poder: %.2f\n", superPoder2);                           // Exibe o Super Poder da Carta 2.

    // --- Bloco de Comparação de Cartas ---
    printf("\n--- Comparação de Cartas ---\n"); // Título da seção de comparação.
    
    // Comparações atributo por atributo usando o operador ternário: (condição) ? valor_se_verdadeiro : valor_se_falso;
    // Se a condição (populacao1 > populacao2) for verdadeira, 'venceuPopulacao' recebe 1. Senão, recebe 0.
    int venceuPopulacao = (populacao1 > populacao2) ? 1 : 0; // 1 se Carta 1 vence, 0 se Carta 2 vence (ou empata).
    int venceuArea = (area1 > area2) ? 1 : 0;               // 1 se a área da Carta 1 é maior.
    int venceuPIB = (pib1 > pib2) ? 1 : 0;                   // 1 se o PIB da Carta 1 é maior.
    int venceuPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0; // 1 se a Carta 1 tem mais pontos turísticos.
    // Caso especial: na densidade, o MENOR valor vence. A condição é invertida (menor que).
    int venceuDensidade = (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0; // 1 se a densidade da Carta 1 é menor.
    int venceuPIBPerCapita = (pibPerCapita1 > pibPerCapita2) ? 1 : 0; // 1 se o PIB per capita da Carta 1 é maior.
    int venceuSuperPoder = (superPoder1 > superPoder2) ? 1 : 0;     // 1 se o Super Poder da Carta 1 é maior.
    
    // --- Bloco de Exibição dos resultados das comparações ---
    // Para cada atributo, exibe qual carta venceu.
    // O operador ternário é usado novamente: se 'venceuPopulacao' for 1 (verdadeiro), imprime "Carta 1". Senão, imprime "Carta 2".
    printf("População: Carta %d venceu (%d)\n", venceuPopulacao ? 1 : 2, venceuPopulacao); // Mostra o vencedor e o valor da variável (1 ou 0) para depuração/verificação.
    printf("Área: Carta %d venceu (%d)\n", venceuArea ? 1 : 2, venceuArea);
    printf("PIB: Carta %d venceu (%d)\n", venceuPIB ? 1 : 2, venceuPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", venceuPontosTuristicos ? 1 : 2, venceuPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", venceuDensidade ? 1 : 2, venceuDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", venceuPIBPerCapita ? 1 : 2, venceuPIBPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", venceuSuperPoder ? 1 : 2, venceuSuperPoder);

    // Retorna 0 para o sistema operacional, indicando que o programa foi executado com sucesso.
    return 0; 
}
