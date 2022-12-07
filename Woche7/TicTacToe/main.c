#include <stdio.h>
#include <stdbool.h>

void printSpielfeld(char array[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%c]", array[i][j]);
        }
        printf("\n");
    }
}

int gueltigeEingabe(char array[3][3], int indexX, int indexY) {

}

int main() {
    bool fertig = false;
    char leer = ' ', x = 'x', o = 'o', spielerAmZug = 1, array[3][3] = {{leer, leer, leer},
                                                               {leer, leer, leer},
                                                               {leer, leer, leer}};
    int indexX, indexY;
    printSpielfeld(array);
    while (!fertig) {

        while (spielerAmZug == 1) {
            printf("Spieler 1 ist am zug. Gib den Index des Feldes ein:\n");
            scanf("%d %d", &indexX, &indexY);
            if (array[indexY][indexX] == leer) {
                array[indexX][indexY] = x;
                spielerAmZug = 2;
            }
        }





        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("[%c]", array[i][j]);
            }
            printf("\n");
        }

        printf("Spieler 1 ist am zug. Gib den Index des Feldes ein:\n");
        scanf("%d %d", &indexX, &indexY);

        array[indexX][indexY] = o;


    }
    return 0;
}
