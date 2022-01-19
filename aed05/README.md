# [AED 05] ADN Alienígena

A vida tal como a conhecemos depende do ADN (ácido desoxirribonucleico), um composto orgânico cujas moléculas contêm as instruções genéticas que controlam todo o funcionamento dos seres vivos. De um ponto de vista simplista, um fragmento de ADN humano pode ser pensado como uma palavra que usa um alfabeto de quatro letras: A, G, C e T (que correspondem às quatro base azotadas Adenina (A), Guanina (G), Citosina (C) e Timina (T).

Recente foi descoberto pela primeira vez um fragmento de ADN que parece ter origem extra-terreste. De facto este ADN tem 26 diferente bases azotadas, que podem ser representadas pelas 26 diferentes letras maiúsculas do alfabeto. Por exemplo, a seguinte palavra é um possível fragmento de ADN alienígena:

`JSHNSHQSHDGNSYHNSJAHSSA`

Para compreender melhor a composição deste ADN, os cientistas querem perceber qual é a letra mais frequente. Serás capaz de ajudá-los?

## O Problema

Dado um fragmento de ADN alienígena, a tua tarefa é produzir uma listagem das letras que aparecem em pelo menos uma vez, ordenada por ordem decrescente da sua frequência (número de occorrências) e em caso de empate pela ordem em que aparecem primeiro no fragmento (ou seja, tendo em conta a primeira ocorrência de cada letra).

## Input

O input contém uma única linha contendo o fragmento a considerar. Este fragmento tem tamanho $T$ e é constituído apenas por letras maiúsculas.

## Output

O output deve listar todas as letras que aparecem pelo menos uma vez. Deve aparecer uma letra por linha, no formato "LETRA FREQUENCIA", onde FREQUENCIA é um inteiro indicando o número total de ocorrências dessa letra. As letras devem vir por ordem decrescente de frequência e em caso de empate pela ordem em que aparecem primeiro no input.

## Restrições

São garantidos os seguintes limites em todos os casos de teste que irão ser colocados ao programa:

1 ≤ $T$ ≤ 10 000

## Exemplo de Input

```
JSHYNSHQSHDGNSHNSJAHSSA
```

## Exemplo de Output

```
S 7
H 5
N 3
J 2
A 2
Y 1
Q 1
D 1
G 1
```

## Explicação do Input/Output

A letra mais frequente é o 'S' que aparece 7 vezes.\
A 2ª letra mais frequente é o 'H', que aparece 5 vezes.\
A 3ª letra mais frequente é o 'N', que aparece 3 vezes.\
A seguir estão o 'J' e o 'A', e o 'J' aparece antes do que o 'A' no output porque também aparece primeiro que o 'A' no input.\
'Y', 'Q', 'D' e 'G' aparecem uma vez e vêm por esta ordem porque é também a ordem onde aparecem no input.\
Mais nenhuma letra aparece no input.
