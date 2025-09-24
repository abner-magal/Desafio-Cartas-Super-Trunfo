# Projeto Super Trunfo de Cidades - Desafio de Programação em C

## Descrição

Este projeto é uma aplicação de console desenvolvida em linguagem C como parte de um desafio de aprendizado progressivo. O programa simula a criação e comparação de cartas para um jogo de Super Trunfo com o tema de cidades, permitindo ao usuário cadastrar os dados, calcular atributos derivados e, por fim, comparar as cartas para determinar uma vencedora.

O desenvolvimento foi estruturado em três níveis de complexidade crescente, cada um adicionando novas funcionalidades sobre a base do nível anterior.

## Estrutura do Desafio

O projeto foi dividido em três etapas principais, refletindo os desafios "Novato", "Aventureiro" e "Mestre".

### Nível 1: Novato - Cadastro de Cartas

Nesta fase inicial, o foco é a entrada e saída de dados básicos.

* **Funcionalidades:**
    * Permite ao usuário inserir via teclado os dados de duas cartas do jogo.
    * Armazena as informações lidas em variáveis com os tipos de dados apropriados.
    * Exibe na tela todos os dados cadastrados de forma organizada e legível.
* **Restrições:** O código é puramente sequencial, sem o uso de estruturas de repetição (`for`, `while`) ou de decisão (`if`, `else`).

### Nível 2: Aventureiro - Análise de Atributos

Esta etapa adiciona uma camada de processamento de dados, transformando os dados brutos em novas informações.

* **Funcionalidades:**
    * Mantém todas as funcionalidades do Nível Novato.
    * **Cálculo da Densidade Populacional:** Computa a densidade da cidade (população / área) e armazena em uma variável `float`.
    * **Cálculo do PIB per Capita:** Computa o PIB por pessoa (PIB / população) e armazena em uma variável `float`.
    * Exibe os novos atributos calculados junto com os dados básicos, com valores de ponto flutuante formatados para duas casas decimais.
* **Restrições:** A estrutura do código continua sequencial, sem laços ou condicionais.

### Nível 3: Mestre - Batalha de Cartas

A fase final implementa a lógica de comparação do jogo, determinando a carta vencedora com base em seus atributos.

* **Funcionalidades:**
    * Mantém todas as funcionalidades dos níveis anteriores.
    * Altera o tipo de dado da `população` para `unsigned long int` para acomodar números maiores.
    * **Cálculo do Super Poder:** Computa um atributo sintético que soma todos os valores numéricos da carta para uma pontuação final.
    * **Comparação Atributo a Atributo:** Compara as duas cartas em todos os seus atributos numéricos.
        * A carta com o **maior** valor vence na maioria dos atributos.
        * A carta com o **menor** valor de Densidade Populacional vence neste atributo específico.
    * Exibe o resultado de cada comparação, indicando a carta vencedora.

## Atributos das Cartas

Cada carta no jogo é definida pelos seguintes atributos:

* **Estado:** `char`
* **Código da Carta:** `char[]` (string)
* **Nome da Cidade:** `char[]` (string)
* **População:** `int` (Níveis 1 e 2), `unsigned long int` (Nível 3)
* **Área (km²):** `float`
* **PIB (bilhões de reais):** `float`
* **Número de Pontos Turísticos:** `int`
* **Densidade Populacional (hab/km²):** `float` (calculado a partir do Nível 2)
* **PIB per Capita (reais):** `float` (calculado a partir do Nível 2)
* **Super Poder:** `float` (calculado a partir do Nível 3)

## Tecnologias Utilizadas

* **Linguagem:** C (Padrão C99 ou superior)
* **Compilador recomendado:** GCC (GNU Compiler Collection) ou MinGW para Windows.

## Como Compilar e Executar

1.  Certifique-se de ter um compilador C (como o GCC) instalado.
2.  Abra um terminal na pasta do projeto.
3.  Compile o código-fonte com o seguinte comando:

    ```bash
    gcc -o super_trunfo super_trunfo.c -Wextra -Wall
    ```
    *(As flags `-Wextra` e `-Wall` são recomendadas para exibir todos os avisos do compilador, uma boa prática de programação.)*

4.  Execute o programa compilado:

    ```bash
    ./super_trunfo
    ```

## Autor

(Abner Magalhães)

-   **E-mail**: [abnermagalhaes47@gmail.com]
-   **LinkedIn**: [https://www.linkedin.com/in/abner-magalh%C3%A3es-603559284/)
-   **GitHub**: [@abner-magal](https://github.com/abner-magal/)
