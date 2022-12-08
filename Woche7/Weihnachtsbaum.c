// Created by David Hermann on Win10 (CLion) with MinGW
#include <stdio.h>

void muster(int anz_zeilen) {
    char stern = '*';
    int abstand = anz_zeilen - 1;
    for (int i = 1; i <= anz_zeilen; i++) {
        for (int k = 0; k < abstand; k++) {
            printf(" ");
        }
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("%c", stern);
        }
        abstand--;
        printf("\n");
    }
    for(int i = 0; i < anz_zeilen - 1; i++) {
        printf(" ");
    }
    printf("%c", stern);

}

int main() {
    int anzahlZeilen;
    printf("Geben Sie die Anzahl der Zeilen ein!\n");
    scanf("%d", &anzahlZeilen);
    if (anzahlZeilen < 3) {
        return 0;
    }
    muster(anzahlZeilen);
    return 0;
}
