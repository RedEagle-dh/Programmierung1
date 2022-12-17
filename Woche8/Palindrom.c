#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool palindrom(char str[]) {
    // Array wird auf 2 Arrays aufgeteilt. Bei ungeraden bleibt der mittlere buchstabe einfach weg.
    int length = strlen(str);

    // Randfälle werden abgefangen
    if (length == 1 || length == 0) {
        return false;
    }

    char array1[length];
    char array2[length];

    // Der vordere Teil des Chararrays wird in das 1. Hilfsarray kopiert.
    for (int i = 0; i < length / 2; i++) {
        array1[i] = str[i];
    }

    // Der hintere Teil des Chararrays wird in das 2. Hilfsarray kopiert.
    // Alternativ hätte man es auch wie beim 1. Hilfsarray machen können und danach das Array umdrehen können.
    int count = 0;
    for (int i = length - 1; i >= length / 2; i--) {
        array2[count] = str[i];
        count++;
    }

    // Jetzt wird überprüft, ob die beiden Arrays gleich sind
    // Mit tolower aus der Library ctypes.h wird sichergestellt, dass Groß und Kleinschreibung keine Rolle spielen
    for (int i = 0; i < length / 2; i++) {
        if (tolower(array1[i]) != tolower(array2[i])) {
            return false;
        }
    }
    return true;
}


int main() {
    char str[] = "00";

    // Normalerweise würde 0 oder 1 ausgegeben werden. Hier wird dann dementsprechend true oder false ausgegeben
    printf("%s", palindrom(str) == 1 ? "true" : "false");
    return 0;
}