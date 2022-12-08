#include <stdio.h>
#include <stdbool.h>

#define leer ' '
#define x 'x'
#define o 'o'

void printSpielfeld(char array[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%c]", array[i][j]);
        }
        printf("\n");
    }
}

int gueltigeEingabe(int indexX, int indexY) {
    if (indexX > 2 || indexX < 0 || indexY > 2 || indexY < 0) {
        return false;
    } else {
        return true;
    }
}

void spielerAmZug(int spieler, char array[3][3]) {
    bool amZug = true;
    int indexX, indexY;

    while (amZug) {
        printf("Spieler %d ist am zug. Gib den Index des Feldes ein:\n", spieler);
        scanf("%d %d", &indexX, &indexY);
        if (!gueltigeEingabe(indexX, indexY)) {
            printf("Die Indizes müssen dürfen nicht kleiner als 0 oder größer als 2 sein!");
        } else {
            if (array[indexX][indexY] == leer) {
                if (spieler == 1) {
                    array[indexX][indexY] = x;
                } else {
                    array[indexX][indexY] = o;
                }
                amZug = false;
            } else {
                printf("Das Feld ist bereits belegt!\n");
            }
        }

    }

}

bool boardIsFull(char array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (array[i][j] == leer) {
                return false;
            }
        }
    }
    return true;
}

char istFertig(char array[3][3]) {

    for (int i = 0; i < 3; i++) {
        if (array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][0] != leer) {
            //printf("1. Schleife");
            return array[i][0];
        }
    }

    for (int i = 0; i < 3; i++) {
        if (array[0][i] == array[1][i] && array[1][i] == array[2][i] && array[0][i] != leer) {
            //printf("2. Schleife");
            return array[0][i];
        }
    }

    // Diagnoale links -> rechts
    if (array[0][2] == array[1][1] && array[1][1] == array[2][0] && array[0][2] != leer) {
        //printf("1. Diagonale");
        return array[0][2];
    }

    // Diagnoale rechts -> links
    if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[0][0] != leer) {
        //printf("2. Diagonale");
        return array[0][0];
    }
    return leer;
}



int switchSpieler(int aktuellerSpieler) {
    if (aktuellerSpieler == 1) {
        return 2;
    } else {
        return 1;
    }
}

int main() {
    bool fertig = false;
    char array[3][3] = {{leer, leer, leer},
                        {leer, leer, leer},
                        {leer, leer, leer}};
    int spieler = 1;
    while (!fertig) {
        printSpielfeld(array);
        spielerAmZug(spieler, array);
        spieler = switchSpieler(spieler);

        if (istFertig(array) == x) {
            printf("Spieler 1 hat gewonnen!\n");
            printSpielfeld(array);
            fertig = true;
        } else if (istFertig(array) == o) {
            printf("Spieler 2 hat gewonnen!\n");
            printSpielfeld(array);
            fertig = true;
        } else {
            if (boardIsFull(array)) {
                printf("Unentschieden!\n");
                printSpielfeld(array);
                fertig = true;
            } else {
                continue;
            }
        }
    }
    return 0;
}
