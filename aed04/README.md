# [AED 04] Números arranjadinhos (versão desafio)

O Pedro reparou que por baixo do seu portátil estava escrito o número 95726184. Curioso como é, não conseguiu deixar de reparar que a soma dos seus dígitos era 42! De facto, 9+5+7+2+6+1+8+4=42, o que fez o Pedro pensar que este era um número mesmo "arranjadinho".

Felicíssimo, foi a correr ter com o Luciano contar a sua descoberta. No entanto, o Luciano não achou a descoberta assim tão fascinante, pois achou que existiam mesmo muitos números com essa propriedade. O Pedro começou a contar a partir do 95726184 e de facto 9 números depois vem o 95726193, cuja soma dos dígitos também é 42. Mas nem sempre a distância é tão curta...

Depois de pensarem mais um pouco, o Pedro e o Luciano acharam que podiam daqui criar um jogo para desafiarem a Ana, o António, a Filipa, o Rosaldo e a Sofia, que consiste em encontrar o primeiro número "arranjadinho" maior que um dado número. Para impedir que simplesmente eles tentem decorar respostas, eles decidiram que estavam interessados em números cuja soma dos dos dígitos fosse um número também à escolha e não apenas 42.

## O Problema

Dados vários pares de inteiros $N_i$ e $K_i$, a tua tarefa é descobrir, para cada par, qual o menor número maior que $N_i$ tal que a soma dos seus dígitos seja exactamente $K_i$.

## Input

Na primeira linha do input vem um inteiro $T$ indicando o número de casos de teste, ou seja, o número de pares de inteiros a considerar.

Seguem-se $T$ linhas, cada uma com os dois inteiros $N_i$ $K_i$ correspondentes.

## Output

O output deve conter $T$ linhas. A $i$-ésima linha deve conter um único inteiro $R_i$ indicando a resposta para o par correspondente, ou seja, qual o número mais pequeno que é simultaneamente maior que $N_i$ e com a soma dos seus dígitos a ser $K_i$.

## Restrições

São garantidos os seguintes limites em todos os casos de teste que irão ser colocados ao programa:

1 ≤ $T$ ≤ 1 000\
1 ≤ $N_i$ ≤ 10<sup>16</sup>\
1 ≤ $K_i$ ≤ 100\
1 ≤ $R_i$ - $N_i$ ≤ 10<sup>18</sup>

## Exemplo de Input

```
7
100000599988 50
100000599989 50
100000599998 50
987654321098 100
12121678909876 42
12121128909876 42
1 92
```

## Exemplo de Output

```
100000599989
100000599998
100000679999
987679999999
12121678910004
12121128910059
29999999999
```
