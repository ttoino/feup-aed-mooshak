# [AED 06] Somas mais próximas

## O Problema

Dada um conjunto $S$ de $N$ números inteiros, e uma sequência de $Q$ perguntas (queries), cada uma indicando um número $P_i$, a tua tarefa é descobrir qual é a soma de dois números diferentes de $S$ que está mais próxima do número $P_i$ de cada pergunta.

## Input

Na primeira linha do input vem um único número indicando $N$, o tamanho do conjunto $S$ de números. Na segunda linha vêm os números $S_i$ do conjunto.

Na terceira linha vem um número $Q$, indicando quantidade de perguntas, seguindo-se na quarta linha os números $P_i$ de cada pergunta.

## Output

O output deve ser constituído por $Q$ linhas, uma por cada pergunta, na mesma ordem em que vinham no input. Cada uma das linhas deve indicar a soma mais próxima da respetiva pergunta. No caso de existirem várias somas à mesma distância mínima, devem vir todas, por ordem crescente e separadas por um espaço.

## Restrições

São garantidos os seguintes limites em todos os casos de teste que irão ser colocados ao programa:

1 ≤ $N$ ≤ 1 000\
1 ≤ $S_i$ ≤ 1 000 000\
1 ≤ $Q$ ≤ 2 000\
1 ≤ $P_i$ ≤ 1 000 000

## Exemplo de Input

```
6
12 3 17 5 34 33
4
1 51 41 21
```

## Exemplo de Output

```
8
51
39
20 22
```

## Explicação do Input/Output

Neste caso temos $S$ = {3,5,12,17,33,34} e 4 perguntas.\
Para a pergunta 1, a resposta é 8 (3+5), a soma de um par mais próxima de 1.\
Para a pergunta 51, a resposta é 51 (17+34).\
Para a pergunta 41, a resposta é 39 (5+34).\
Finalmente, para a pergunta 21, a resposta é 20 (3+17) e 22 (5+17), ambos à mesma distância de 21.
