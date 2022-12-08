// Created by David Hermann in CLion (Windows 11)
#include <stdio.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("../werte.txt", "r");

    int eingabe, maximum, counter = 0;

    if (fp != NULL) {
        while (!feof(fp)) {
            int anzahlElemente = fscanf_s(fp, "%d", &eingabe);

            if (anzahlElemente <= 0) {
                break;
            }

            printf("%d", anzahlElemente);
            if (counter == 0 || eingabe > maximum) {
                maximum = eingabe;
            }
            counter++;
        }
        fclose(fp);

        fp = fopen("../ergebnis.txt", "w");
        if (fp != NULL) {
            fprintf(fp, "%d", maximum);
        } else {
            printf("Fehler, Datei konnte nicht beschrieben werden!");
        }
        fclose(fp);
    } else {
        printf("Fehler, Datei wurde nicht gefunden!");
    }


    return 0;
}
