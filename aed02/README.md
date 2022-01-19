# [AED 02] Números arranjadinhos

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

1 ≤ $T$ ≤ 20\
1 ≤ $N_i$ ≤ 109\
1 ≤ $K_i$ ≤ 50\
1 ≤ $R_i$ - $N_i$ ≤ 100 000

## Exemplo de Input

```
6
95726184 42
424242 42
1 25
299 13
8660 20
4253816 8
```

## Exemplo de Output

```
95726193
429999
799
319
8705
4300001
```

## Explicação do Input/Output

95726193 é o menor número maior que 95726184 cuja soma dos dígitos é 42.\
429999 é o menor número maior que 424242 cuja soma dos dígitos é 42.\
799 é o menor número maior que 1 cuja soma dos dígitos é 25.\
319 é o menor número maior que 299 cuja soma dos dígitos é 13.\
8705 é o menor número maior que 8660 cuja soma dos dígitos é 20.\
4300001 é o menor número maior que 4253816 cuja soma dos dígitos é 8.
