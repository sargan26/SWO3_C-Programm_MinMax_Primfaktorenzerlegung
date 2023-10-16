#include <stdio.h>
#include <stdlib.h>

// Funktion zur Berechnung der Primfaktoren
void factorize(int num) {
    printf("%d: {", num);
    int divisor = 2;
    int count = 0;
    while (num > 1) {
        if (num % divisor == 0) {
            num /= divisor;
            count++;
        } else {
            if (count > 0) {
                printf("{%d,%d}", divisor, count);
                if (num > 1) {
                    printf(",");
                }
                count = 0;
            }
            divisor++;
        }
    }
    printf("}\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Bitte geben Sie mindestens eine positive ganze Zahl als Argument ein.\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num < 0) {
            printf("Die Zahl %d ist nicht positiv und wird übersprungen.\n", num);
            continue;
        }
        factorize(num);
    }

    return 0;
}
