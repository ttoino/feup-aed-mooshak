# [AED 16] Recuperando árvores perdidas

Um antigo professor da unidade curricular de Algoritmos e Estruturas de Dados tinha muitos exemplos de árvores binárias guardadas para mostrar aos alunos. O que ele fazia era simplesmente guardar a representação **preorder** e **inorder** das árvores (não indicando árvores vazias). **Como usava sempre números diferentes, esta representação bastava para definir completamente a árvore!**

Recorda como escrever uma árvore em **preorder** e **inorder**

- **preorder**: escrever valor da raíz, seguida da representação preorder da subárvore esquerda, seguida da representação preorder da árvore direita
- **inorder**: escrever representação inorder da subárvore esquerda, seguida do valor da raíz, seguida da representação inorder da árvore direita

```
     1
   /   \
  2     3
 / \   / \
4   5 6   7
```

Por exemplo, para a árvore da figura anterior, temos as seguintes representações:

- **preorder**: 1 2 4 5 3 6 7
- **inorder**: 4 2 5 1 6 3 7

O novo professor da cadeira queria recuperar as árvores e precisa da tua ajuda. A tua tarefa é, dadas as duas reprensentações da árvore (preorder e inorder) reconstruir a árvore. Depois disso, basta mostrares a representação **postorder** da árvore para mostrares que realmente a árvore ficou bem construida. Como o novo professor está muito interessado em saber o número de nós terminais (ou folhas) da árvore, tens também de o indicar.

Recorda como escrever uma árvore em **postorder** ("**4 5 2 6 7 3 1**" para a árvore da figura)

- **postorder**: escrever representação postorder da subárvore esquerda, seguida da representação postorder da árvore direita, seguida do valor da raíz

## Input

A primeira linha contém um número **T**, indicando o número de casos de teste que se seguem.

Cada um dos casos é descrito por um conjunto de 3 linhas no seguinte formato:

- Uma primeira linha contendo um inteiro **N**, indicando o número de nós da árvore
- Uma segunda linha com a representação preorder da árvore (números inteiros positivos separados por espaços)
- Uma terceira linha com a representação inorder da árvore (números inteiros positivos separados por espaços)

Podes assumir que os valores dos nós são inteiros distintos entre **1** e **N**.

## Output

Para cada caso devem ser imprimidas duas linhas de output:

- Uma primeira linha com a representação postorder da árvore (números inteiros positivos separados por espaços).
- Uma segunda linha contendo "**Folhas = F**", onde **F** é o número de folhas da árvore.

Vê o exemplo para clarificar a maneira como deve ser feito o output.

## Restrições

São garantidos os seguintes limites em todos os casos de teste que irão ser colocados ao programa:

1 ≤ **T** ≤ 20\
1 ≤ **N** ≤ 100

## Exemplo de Input

```
4
7
1 2 4 5 3 6 7
4 2 5 1 6 3 7
3
1 2 3
1 2 3
3
1 2 3
2 1 3
3
1 2 3
3 2 1
```

## Exemplo de Output

```
4 5 2 6 7 3 1
Folhas = 4
3 2 1
Folhas = 1
2 3 1
Folhas = 2
3 2 1
Folhas = 1
```

## Explicação do Input/Output

O primeiro exemplo de input corresponde à figura do enunciado.
