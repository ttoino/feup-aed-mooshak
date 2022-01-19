# [AED 01] O sentido da vida

O Pedro sempre soube que o número [42](https://www.scientificamerican.com/article/for-math-fans-a-hitchhikers-guide-to-the-number-42/) é a resposta para [o sentido da vida, do universo e de tudo mais](https://www.google.com/search?q=what+is+the+meaning+of+life+the+universe+and+everything). Com o seu radiotelescópio ele está a apanhar sinais de rádio de baixa frequência que ele tenta perceber se poderá ser sinais de vida extraterrestre.

Os sinais podem ser interpretados como uma sequência de números inteiros e, naturalmente, ao Pedro só lhe passou pela cabeça saber se o número 42 aparece com a frequência necessária para considerar que os sinais são de facto sinal de vida inteligente. Será que podes ajudá-lo a contar quantas vezes o número 42 aparece?

## O Problema

Dada uma sequência de **N** números inteiros, a tua tarefa é calcular a frequência do número 42, ou seja, quantas vezes ocorre o número 42 na sequência que te é dada.

## Input

Na primeira linha do input vem um inteiro **N** indicando o tamanho da sequência, ou seja, a quantidade de números a considerar.

Seguem-se **N** linhas, cada uma com um inteiro <strong>S<sub>i</sub></strong> indicando os números da sequência.

## Output

O output é constituído por uma linha contendo um inteiro representando a quantidade de números <strong>S<sub>i</sub></strong> da sequência que são exatamente 42.

## Restrições

São garantidos os seguintes limites em todos os casos de teste que irão ser colocados ao programa:

1 ≤ **N** ≤ 1 000\
1 ≤ <strong>S<sub>i</sub></strong> ≤ 1 000 000

## Exemplo de Input

```
7
12
42
42
35
10
567
42
```

## Exemplo de Output

```
3
```

## Explicação do Input/Output

O número 42 aparece 3 vezes na sequência [12,42,42,35,10,567,42].
