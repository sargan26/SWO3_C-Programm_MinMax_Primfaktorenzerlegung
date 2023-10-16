# Übung 02 - Lösung

**Name: Daniel Mitterlehner**

## 1. Aufgabe 1 (src/minmax/)

### Lösungsidee

Kommandozeilen Parameter erhält man in C über den Parameter argv der main-Funktion. Da diese Parameter als Zeichenkette daher kommen muss man sie wahrscheinlich in eine Zahl umwandeln zB. mit der atoi-Funktion. Min, Max als globale Variable speichern und mit 0 initialisieren. Wenn etwas größer oder kleiner ist entsprechend Min oder Max aktualisieren und ausgeben.

### Implementierung
### Tests

1. Compilieren und keine Parameter

![](doc/minmax1.png)

2. Nur positive Werte

![](doc/minmax2.png)

3. Nur negative Werte

![](doc/minmax3.png)

4. Minimum an 1. Stelle

![](doc/minmax4.png)

5. Minimum an letzter Stelle

![](doc/minmax5.png)

6. Negative und positive Werte

![](doc/minmax6.png)

7. Zeichenketten übergeben statt Zahl

![](doc/minmax7.png)


## 2. Aufgabe 2 (src/prim/)  

### Lösungsidee

Durch die Kommandozeilen Parameter in einer For-Schleife durch iterieren und wieder mit der atoi-Funktion in Integer umwandeln. 

### Implementierung
### Tests
