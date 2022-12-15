#include <stdio.h>
#include <string.h>
#include <math.h>

int anzahlA(char text[]) {
    int i = 0;
    int countA = 0;
    while (text[i] != '\0') {
        if (text[i] == 'a') {
            countA++;
        }
        i++;
    }
    return countA;
}

void showBString(char str[]) {
    int len = strlen(str); // Länge des Arrays
    int counter = len % 4; // Array durch vier teilbar?
    if (counter == 0) { // Wenn counter 0 ist, setze ihn erstmal auf vier
        counter = 4;
    }
    for (int i = 0; i < len; i++) {
        printf("%c", str[i]);

        counter--;

        // Wenn counter 0 ist, dann gib leerzeichen aus und setze ihn wieder auf vier
        if (counter == 0) {
            printf(" ");
            counter = 4;
        }
    }
}

// Liefert die Länge des größten gemeinsamen Teilstrings von s1 und s2 zurück
int longestCommonSubstring(char s1[], char s2[]) {
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);

    // 2D-Array anlegen, um die Längen der gemeinsamen Teilstrings für jedes
    // mögliche Ende der Teilstrings von s1 und s2 zu speichern
    int lengths[s1Len][s2Len];
    memset(lengths, 0, sizeof(lengths));

    // Längen der gemeinsamen Teilstrings berechnen
    int longest = 0;
    for (int i = 0; i < s1Len; i++) {
        for (int j = 0; j < s2Len; j++) {
            if (s1[i] == s2[j]) {
                if (i == 0 || j == 0) {
                    // Wenn wir am Anfang von s1 oder s2 sind, dann ist der gemeinsame
                    // Teilstring nur aus dem aktuellen Zeichen bestehend
                    lengths[i][j] = 1;
                } else {
                    // Ansonsten ist die Länge des gemeinsamen Teilstrings die Länge des
                    // gemeinsamen Teilstrings ohne das aktuelle Zeichen plus 1
                    lengths[i][j] = lengths[i - 1][j - 1] + 1;
                }

                // Wir merken uns die längste bisher gefundene Länge des gemeinsamen
                // Teilstrings
                longest = fmax(longest, lengths[i][j]);
            }
        }
    }

    return longest;
}



int main() {

    // Je nachdem welche Methode du testen willst, musst du die anderen auskommentieren.
    
    //printf("%d", anzahlA("Hallo Welt!")); // Ergebnis wäre 1

    //char str[] = "01001011";
    //showBString(str); // Ausgabe wäre 0100 1011

    //printf("%d", longestCommonSubstring("Hallo", "Hallo Welt!")); // Ergebnis wäre 5

    return 0;
}
