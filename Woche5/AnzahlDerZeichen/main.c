#include <stdio.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("../test.txt", "r");
    int a = 0, e = 0, i = 0, o = 0, u = 0, allElements = -1, allLetters = -1;
    char eingelesen;

    if (fp != NULL) {
        while (!feof(fp)) {
            eingelesen = fgetc(fp);
            switch (eingelesen) {
                case 'a':
                    a++;
                    break;
                case 'e':
                    e++;
                    break;
                case 'i':
                    i++;
                    break;
                case 'o':
                    o++;
                    break;
                case 'u':
                    u++;
                    break;
                default:
                    break;
            }
            if (eingelesen != ' ') {
                allLetters++;
            }
            allElements++;
        }
        printf("Insgesamte Anzahl der eingelesenen Buchstaben: %d\nInsgesamte Anzahl aller eingelesenen Zeichen: %d\n\nVokale kamen so oft vor:\na: %d\ne: %d\ni: %d\no: %d\nu: %d", allLetters, allElements, a, e, i, o, u);

    } else {
        printf("Fehler, Datei wurde nicht gefunden!");
    }
    fclose(fp);
    return 0;
}
