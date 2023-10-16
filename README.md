[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/2bCDQHNn)
# **SWO3-Übungen - WS 2023/24 - Übungszettel 1**

<br>

## **Beispiel 1 (40 P): MinMax (`src/minmax/`)**

Schreiben Sie ein C-Programm `minmax`, das das Folgende leistet: Dem Programm
können auf der Kommandozeile beliebig viele negative und positive ganze Zahlen
mitgegeben werden. Das Programm muss die kleinste negative (Minimum) sowie die
größte positive (Maximum) der mitgebenen Zahlen als Ergebnis auf der Konsole
ausgegeben. Kommen in der Parameterliste keine negativen Zahlen vor, so muss für
das Minimum `0` ausgegeben werden. Analoges gilt für das Maximum.

<br>

## **Beispiel 2 (60 P): Primfaktorenzerlegung (`src/prim/`)**

Schreiben Sie ein C-Programm `factorinteger`, welches die Primfaktoren aller
positiven ganzen Zahlen, die aus der Kommandozeile gelesen werden, berechnet.
Die Primfaktoren müssen dabei aufsteigend und mit ihrer Multiplizität auf der
Konsole ausgegeben werden. Die Ausgabe muss in dem in den Beispielen angegebenen
Format erfolgen:

```C
./factorinteger.exe 35000 0 42 1 65537

35000: {{2,3},{5,4},{7,1}}
    0: {{0,1}}
   42: {{2,1},{3,1},{7,1}}
    1: {{1,1}}
65537: {{65537,1}}
```
