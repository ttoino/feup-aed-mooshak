# [AED 15] Será uma árvore de pesquisa?

Dada uma árvore binária, a tua tarefa é descobrir se a árvore dada é uma árvore binária de pesquisa, ou seja:

- Todas os valores (se existir algum) da subárvore esquerda são menores do que o valor da raíz
- Todas os valores (se existir algum) da subárvore direita são maiores do que o valor da raíz
- As subárvores esquerda e direita são também árvores binárias de pesquisa

A figura seguinte ilustra alguns exemplos de árvores binárias, indicando se são ou não árvores binárias de pesquisa:

```
  Árvore 1      Árvore 2  |   Árvore 3      Árvore 4
     5            7             |5|           5
   /   \        /   \     |    /   \        /   \
  3     10     5     9        4     8     |3|    7
 / \   /  \     \   / \   |  / \          / \   / \
1   4 7    42    6 8   10   2  |7|       1  |2|6   8
                          |
     Árvores Binárias            Não são Árvores
       de Pesquisa        |    Binária de Pesquisa
```

- A árvore 3 não é de pesquisa pois 7 é maior que 5 mas está na sua subárvore esquerda.
- A árvore 4 não é de pesquisa pois 2 é menor que 3 mas está na sua subárvore direita.

## Input

Na primeira linha do input vem um inteiro **T** indicando o número de casos de teste, ou seja, o número de árvores a considerar.

Cada árvore binária é indicada por uma linha contendo a árvore indicanda em preorder (primeiro vem a raíz, depois toda a subárvore esquerda e depois toda a subárvore direita). Para ser possível desambiguar, os nós "nulos" vêm indicados com um "**N**" (todos os outros nós contêm um número inteiro entre 0 e 100, inclusive).

## Output

O output deve conter **T** linhas. A *i*-ésima linha deve indicar "**sim**" se árvore correspondente for uma árvore binária de pesquisa e "**nao**" caso contrário.

## Restrições

São garantidos os seguintes limites em todos os casos de teste que irão ser colocados ao programa:

1 ≤ **T** ≤ 20\
1 ≤ **N** ≤ 100

## Exemplo de Input

```
4
5 3 1 N N 4 N N 10 7 N N 42 N N
7 5 N 6 N N 9 8 N N 10 N N
5 4 2 N N 7 N N 8 N N
5 3 1 N N 2 N N 7 6 N N 8 N N
```

## Exemplo de Output

```
sim
sim  
nao
nao
```

## Explicação do Input/Output

O exemplo de input corresponde às quatro árvores da figura do enunciado.
As duas primeiras árvores são de pesquisa (e daí a resposta ser "*sim*"). As duas últimas não o são (e daí a resposta ser "*nao*").
