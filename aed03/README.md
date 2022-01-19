# [AED 03] Matrículas

Em Portugal, as matrículas dos carros começaram por ter o formato XX-NN-NN, onde X era uma das 23 letras do nosso alfabeto entre A e Z (nota que as letras K, W e Y não são permitidas) e N era um dígito entre 0 e 9. Um exemplo de uma matrícula válida é QX-79-84. As matrículas são atribuídas a novos veículos de forma sequencial. Os novos valores na sequência são obtidos primeiro incrementando a parte numérica da matrícula (onde o dígito menos significativo está à direita), e depois a parte alfabética (tal como nos números, a letra menos significativo está à direita). Por exemplo, a seguir à matrícula CC-00-00 vem a matrícula CC-00-01, a seguir a CC-99-99 vem CD-00-00 e a seguir a CZ-99-99 vem a matrícula DA-00-00.

A última matrícula válida neste sistema era o ZZ-99-99, mas rapidamente o número de veículos em circulação ultrapassou o permitido pelo esquema de matrículas e desse modo novos formatos foram adicionados ao sistema. A primeira extensão foi o formato NN-NN-XX. Quando estas matrículas esgotaram (a última foi 99-99-ZZ) foi introduzido o formato NN-XX-NN, e quando este formato esgotou (a última foi 99-ZZ-99) foi introduzido o mais recente formato XX-NN-XX. Em todos estes esquemas, a parte dos números é incrementada antes da parte das letras. Por exemplo, a seguir a 00-AA-99 vem a matrícula 01-AA-00.

É possível definir a distância entre duas matrículas observando a ordem em que elas foram sendo atribuídas. Por exemplo, a distância entre QX-79-84 e QX-79-86 é de 2. Já a distância entre ZZ-90-00 e ZZ-80-00 é de 1000, tal como a distância entre ZZ-90-00 e 00-00-AA.

## O Problema

Dadas vários pares de matrículas em qualquer um dos quatro formatos possíveis, a tua tarefa é calcular e imprimir a distância entre cada par.

## Input

Na primeira linha do input vem um inteiro $T$ indicando o número de casos de teste, ou seja, o número de pares de matrículas a considerar.

Seguem-se $N$ linhas, cada uma com duas matrículas num dos quatro formatos possíveis: XX-NN-NN (1ª geração), NN-NN-XX (2ª geração), NN-XX-NN (3ª geração) ou XX-NN-XX (4ª geração)

## Output

O output deve conter $T$ linhas. A $i$-ésima linha deve conter um único inteiro indicando a distância entre o par de matrículas respetivo.

## Restrições

São garantidos os seguintes limites em todos os casos de teste que irão ser colocados ao programa:

1 ≤ $T$ ≤ 100

## Exemplo de Input

```
8
ZZ-90-00 00-00-AA
01-AA-00 00-AA-99
AA-00-00 00-00-AA
23-AC-47 41-86-ZZ
98-ZZ-99 AA-42-AA
ZZ-99-ZZ AA-00-00 
GT-09-32 32-TG-09
12-SV-45 67-PT-89
```

## Exemplo de Output

```
1000
1
5290000
28161
143
43854099
13222277
704456
```

## Explicação do Input/Output

A diferença entre a matrícula ZZ-90-00 e a matrícula 00-00-AA é de 1000 matrículas.\
A diferença entre a matrícula 01-AA-00 e a matrícula 00-AA-99 é de 1 matrícula.\
A diferença entre a matrícula AA-00-00 e a matrícula 00-00-AA é de 5290000 matrículas.\
A diferença entre a matrícula 23-AC-47 e a matrícula 41-86-ZZ é de 28161 matrículas.\
(...)
