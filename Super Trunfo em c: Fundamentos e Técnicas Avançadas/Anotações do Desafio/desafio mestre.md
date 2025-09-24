# Desafio: Nível Mestre
## Batalha de Cartas no Super Trunfo

Prepare-se para o desafio final! Agora que você já sabe cadastrar cartas e calcular atributos importantes, é hora de colocar suas cartas para lutar! Neste nível avançado, você implementará a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder". Prepare-se para usar todo o seu conhecimento de operadores relacionais, modificadores de tipo e conversão de tipos em C!

### O que você vai fazer

Seu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, assim como nos níveis anteriores, mas com uma mudança importante: a população agora deve ser armazenada como `unsigned long int` para acomodar números maiores. As demais informações permanecem com os mesmos tipos. Após a leitura dos dados, seu programa deverá:

1.  **Calcular a Densidade Populacional e o PIB per Capita**: Assim como no nível intermediário, calcule e armazene esses valores.

2.  **Calcular o Super Poder**: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como `float`. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!

3.  **Comparar as Cartas**: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o **menor** valor vence; para os demais atributos (incluindo Super Poder), a carta com o **maior** valor vence.

4.  **Exibir os Resultados das Comparações**: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

### Exemplo de Saída (após a entrada dos dados):

```
Comparação de Cartas:
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)
```

### Requisitos funcionais

*   Manter as funcionalidades dos níveis básico e intermediário (leitura, cálculo e exibição dos dados das cartas, incluindo densidade populacional e PIB per capita).
*   Calcular corretamente o Super Poder para cada carta.
*   Comparar corretamente as cartas atributo por atributo, considerando a regra específica para densidade populacional.
*   Exibir os resultados das comparações de forma clara e organizada.

### Requisitos não funcionais

*   Manter os requisitos não funcionais dos níveis anteriores (usabilidade, legibilidade, corretude, eficiência).