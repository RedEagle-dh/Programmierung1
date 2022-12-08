#include <stdio.h>

int maxValue(int myArray[9]) {

    int maxValue = myArray[0];
    for (int j = 1; j <= 9; ++j) {
        if (myArray[j] > maxValue) {
            maxValue = myArray[j];
        }
    }
    return maxValue;
}

int main() {

    // Diese Methode funktioniert via Arrays und einer externen Funktion welche über der main() definiert wurde.
    // Das ist allerdings nur die Version bei der negative Zahlen ignoriert werden. Man kann über eine einfache if abfrage die Funktion einbauen.
    int array[9];

    printf("Geben sie 10 Zahlen ein.\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &array[i]);
    }
    printf("Die groesste aller eingegebenen Zahlen ist: %d\n", maxValue(array));

    // Diese Methode ist die bei der negative Zahlen ignoriert werden.
    printf("Geben sie 10 Zahlen ein.\n");
    int eingabe, maximum;
    for(int i = 0; i <= 9; i++) {
        scanf("%d", &eingabe);
        if (!maximum) {
            maximum = eingabe;
        } else if (eingabe > maximum) {
            maximum = eingabe;
        }
    }
    printf("Das Maximum betraegt %d\n", maximum);

    // Diese Methode ist die bei der bei negativen Zahlen abgebrochen wird
    printf("Geben sie 10 Zahlen ein.\n");
    int eingabe2, maximum2;
    for(int i = 0; i <= 9; i++) {
        scanf("%d", &eingabe2);
        if (eingabe2 < 0) {
            printf("Bitte keine negativen Zahlen eingeben!");
            break;
        }
        if (!maximum2) {
            maximum2 = eingabe2;
        } else if (eingabe2 > maximum2) {
            maximum2 = eingabe2;
        }
    }
    if (eingabe2 > 0) {
        printf("Das Maximum betraegt %d\n", maximum2);
    }


    return 0;
}