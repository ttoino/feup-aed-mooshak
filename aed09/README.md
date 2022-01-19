# [AED 09] Pim, Pam, Pum

**"Pim, Pam, Pum, cada bola mata um, p'ra galinha e para o peru quem se livra és mesmo tu"**

Quem não se lembra de ter feito este jogo quando era pequeno? A ideia é muito simples. A frase atrás descrita tem 19 palavras:

```
"Pim, Pam, Pum, cada bola mata um, p'ra galinha e para o peru quem se livra és mesmo tu"
  1    2     3    4   5    6   7    8      9    10 11  12 13   14  15  16   17  18   19
```

3 crianças resolveram jogar este jogo, o Paulo, a Raquel e o Carlos, que estão dispostas por esta ordem. O Paulo começa a dizer a frase, e em cada palavra vai apontando para as pessoas. Ao chegar ao fim da lista de pessoas, volta ao início, a ele mesmo, como exemplificado na figura seguinte.

|      ☺ | Paulo |      ☺ | Raquel |      ☺ | Carlos  |
| -----: | :---: | -----: | :----: | -----: | :-----: |
|  **1** |  Pim  |  **2** |  Pam   |  **3** |   Pum   |
|  **4** | cada  |  **5** |  bola  |  **6** |  mata   |
|  **7** |  um   |  **8** |  p'ra  |  **9** | galinha |
| **10** |   e   | **11** |  para  | **12** |    o    |
| **13** | peru  | **14** |  quem  | **15** |   se    |
| **16** | livra | **17** |   és   | **18** |  mesmo  |
| **19** |  tu   |        |        |        |         |

Quem se livrava no início era o Paulo. Agora imagina que o jogo continuava. A pessoa que se livrou sai da lista, e a contagem recomeça na próxima pessoa (neste caso a Raquel). Quem se livrava a seguir era a Raquel e o Carlos, coitado, era o que não se livrava.

Descontente com isto, o Carlos, sabendo que és um bom programador, resolveu pedir-te ajuda. O que ele quer saber é, dada uma configuração inicial, se ele irá perder o jogo. O pior é que ele não sabe que frase vai ser usada. Por vezes e aquela frase comprida, outras vezes é uma mais pequena (como por exemplo, "Pim, Pam, Pum, quem se livra és tu", que neste caso teria 8 palavras). Podes ajudá-lo?

## Input

A primeira linha contém um número $N$ (1≤$N$≤10) indicando o número de casos a analisar.

De seguida vêm $N$ casos, cada um definido por duas linhas:

- Na primeira vez a frase que vai ser usada para a contagem (com não mais do que 50 palavras, sempre separadas por um único espaço)
- Na segunda vem um número $K$ (1≤$K$≤100), indicando o número de crianças que vão jogar o jogo, logo seguido de $K$ nomes, indicando o nome das crianças.

Podes assumir que um dos nomes (que são sempre formados por uma única palavra) será sempre `"Carlos"` e que a frase será **apenas** constituída por letras (maísculas ou minúsculas, mas sem acentos) e espaços (para efeitos de contagem, uma palavra é uma sequência de caracteres delimitada por espaços ou mudanças de linha).

## Output

Para cada caso, vem uma linha de output:

- `"O Carlos nao se livrou"`, indicando que o Carlos perde o jogo
- `"O Carlos livrou-se (coitado do NomeX!)"`, onde **`NomeX`** indica a pessoa que perde o jogo.

## Exemplo de Input

```
2
Pim Pam Pum cada bola mata um pra galinha e para o peru quem se livra es mesmo tu
3 Paulo Raquel Carlos
Pim Pam Pum quem se livra es tu
4 Fernando Eduardo Pedro Carlos
```

## Exemplo de Output

```
O Carlos nao se livrou
O Carlos livrou-se (coitado do Pedro!)
```
