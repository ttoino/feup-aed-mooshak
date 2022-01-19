# [AED 13] Altura de uma árvore

Dada uma árvore binária, a tua tarefa é descobrir a sua altura. Recorda que a altura de uma árvore é o tamanho da maior caminho da árvore desde a raíz até uma folha (onde o tamanho do caminho é o número de arestas percorridas). A seguinte imagem ilustra quatro árvores e a sua respetiva altura.

```
 depth = 2 | depth = 0 | depth = 1 | depth = 3

     1     |     1     |     1     |     1
    / \                       \         /
   2   5   |           |       2   |   5
  / \                                 / \
 4   3     |           |           | 2   3
                                          \
           |           |           |       4
```

## Input

Na primeira linha do input vem um inteiro **T** indicando o número de casos de teste, ou seja, o número de árvores a considerar.

Cada árvore é indicada por duas linhas:

- A primeira linha indica o número de nós **N** da árvore. Cada nó é identificado por um número distinto entre **1** e **N** e o nó 1 é sempre a raíz da árvore.
- A segunda linha contém **N-1** nós, indicando os pais (antecessores) de cada nó. O *i*-ésimo número da linha indica o pai do nó *i+1* (o primeiro número indica o pai do nó 2, o segundo número indica o pai do nó 3, etc).

É garantido que as árvores são binárias (existem no máximo dois filhos em cada nó). Note também que a maneira como é dado o input não lhe garante conseguir distinguir qual é o filho esquerdo e o filho direito, mas para este problema essa distinção não é realmente necessária, pois não?

## Output

O output deve conter **T** linhas. A *i*-ésima linha deve conter um único inteiro **A** indicando a altura da árvore correspondente.

## Restrições

São garantidos os seguintes limites em todos os casos de teste que irão ser colocados ao programa:

1 ≤ **T** ≤ 20\
1 ≤ **N** ≤ 100

## Exemplo de Input

```
4
5
1 2 2 1
1

2
1
5
5 5 3 1
```

## Exemplo de Output

```
2
0
1
3
```

## Explicação do Input/Output

O exemplo de input corresponde às 4 árvores da figura do enunciado (ex: a 2ª e 3ª linha detalham a árvore da esquerda de profundidade 2).
