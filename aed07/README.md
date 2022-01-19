# [AED 07] Viagem de mochila às costas

O Aniceto e os amigos resolveram fazer uma viagem até aos Alpes, onde vão percorrer um belíssimo trilho de montanha. Como o trilho é muito longo, eles resolveram levar as mochilas às costas e acampar várias noites no caminho. Para o Aniceto, uma das melhoras partes de toda a experiência é o planeamento de toda a viagem e ele quer ter a certeza de escolher da melhor forma possível.

Os amigos já sabem quais os sítios onde é possível montar as tendas para passar a noite sabem também qual a distância em kms entre os possíveis locais sucessivos de acampamento. O objectivo do Aniceto dividir o percurso em vários dias, de modo a **minimizar a distância que têm de andar num único dia**. Imagina por exemplo que eles querem dividir em quatro dias as seguintes distâncias consecutivas:

`7 9 3 8 2 2 9 4 3 4 7 9 9`

Uma hipótese seria dividir percurso nas seguintes quatro partes:

`7 9 3 | 8 2 2 | 9 4 3 | 4 7 9 9`

Neste caso, eles andariam 19km no primeiro dia (7+9+3), 12km no segundo dia (8+2+2), 16km no terceiro dia (9+4+3) e 29km no último dia (4+7+9+9). O "custo" deste caminho seria de 29km, que é a maior distância num único dia.

Uma alternativa melhor seria a seguinte:

`7 9 | 3 8 2 2 | 9 4 3 4 | 7 9 9`

Agora eles andariam 16km, 15km, 20km e 25km em cada dia, com o custo a ser de 25km (a maior distância).

Esta não é contudo a maneira ótima para quatro dias de viagem... Ainda para mais o Aniceto gostava de saber como dividir o percurso se ao invés de quatro, quisesse três ou cinco dias de viagem. Será que podes ajudá-lo?

## O Problema

Dado um conjunto de **N** distâncias, e **P** perguntas (queries), cada uma indicando um número <strong>K<sub>i</sub></strong> de dias, a tua tarefa é calcular, para cada pergunta, qual o custo ótimo, ou seja, qual o caminho que minimiza a maior distância num único dia, tal com atrás explicado.

## Input

Na primeira linha do input vem um único número indicando **N**, a quantidade de distâncias a considerar. Segue-se uma linha com **N** inteiros <strong>D<sub>i</sub></strong>, indicando as distâncias entre locais de acampamento.

Na terceira linha vem um número **P**, indicando quantidade de perguntas. Seguem-se **P** linhas, cada uma com um inteiro <strong>K<sub>i</sub></strong> indicando o número de dias em que o Aniceto deseja dividir o percurso.

## Output

O output deve ser constituído por **P** linhas, uma por cada pergunta, na mesma ordem em que vinham no input. Cada uma das linhas deve indicar o custo ótimo respetivo, ou seja, a menor distância máxima de uma partição em <strong>K<sub>i</sub></strong> dias das distâncias dadas.

## Restrições

São garantidos os seguintes limites em todos os casos de teste que irão ser colocados ao programa:

1 ≤ **N** ≤ 1 000\
1 ≤ <strong>D<sub>i</sub></strong> ≤ 1 000\
1 ≤ **P** ≤ 10\
1 ≤ <strong>K<sub>i</sub></strong> ≤ N

## Exemplo de Input

```
13
7 9 3 8 2 2 9 4 3 4 7 9 9
3
4
3
5
```

## Exemplo de Output

```
21
27
18
```

## Explicação do Input/Output

Neste caso temos 3 perguntas.\
Para a 1ª pergunta, com <strong>K<sub>i</sub></strong>=4 dias, a resposta é 21 e uma partição possível com esse custo é `7 9 3 | 8 2 2 9 | 4 3 4 7 | 9 9`\
Para a 2ª pergunta, com <strong>K<sub>i</sub></strong>=3 dias, a resposta é 27 e uma partição possível com esse custo é `7 9 3 8 | 2 2 9 4 3 4 | 7 9 9`\
Para a 3ª pergunta, com <strong>K<sub>i</sub></strong>=5 dias, a resposta é 18 e uma partição possível com esse custo é `7 9 | 3 8 2 2 | 9 4 3 | 4 7 | 9 9`
