Dato un DFA A, che ha come alfabeto l'Alfabeto **Binario** {0,1}, fornire almeno _tre_ stringhe accettate dal DFA,
  tali che le stringhe rappresentino numeri multipli di 3.

------------------------------

1. Il DFA accetta **solo multipli di 3**
2. Le stringhe devono essere in _binario_, quindi sequenze di 0 e 1
3. Dobbiamo fornire almeno 3 esempi

------------------------------

a) Dividere ogni multiplo di 3 per la **Cardinalita'** dell'alfabeto di A (_2_), e **_salviamo il resto_**

Prendiamo i primi multipli di 3, ovvero
                3,6,9

Dividiamo ognuno per la cardinalita':

  3|2 -> r 1        6|2 -> r 0        9|2 r -> 1
  1|2 -> r 1        3|2 -> r 1        4|2 r -> 0
  0                 1|2 -> r 1        2|2 r -> 0
                    0                 1|2 r -> 1
                                      0
b) Andiamo a scrivere questi numeri in binario, prendendo i resti **dal basso verso l'alto**

3 : 11
6 : 110
9 : 1001

------------------------------
