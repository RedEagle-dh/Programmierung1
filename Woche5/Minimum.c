// Created by David Hermann in CLion (Windows 11)
// Positive Zahlen: N*:={1, 2, 3, ...}
#include <stdio.h>

int main() {
    int minimum, eingabe, counter = 0;
    printf("Geben Sie 10 ganze positive Zahlen ein!\n");

    while (counter < 10) {
        scanf_s("%d", &eingabe);
        if (eingabe > 0) {
            if (counter == 0 || eingabe < minimum) {
                minimum = eingabe;
            }
            counter++;
        }
    }

    printf("Das minimum aller eingegebenen positiven ganzen Zahlen ist: %d\n", minimum);

    return 0;
}
