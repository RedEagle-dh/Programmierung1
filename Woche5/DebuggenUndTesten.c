// Tested and edited by David Hermann in CLion (Windows 11)

#include <stdio.h>

int main()
{
    int a, b;
    int result = 0;

    // TODO; zuerst a und b noch einlesen:
    scanf_s("%d", &a);
    scanf_s("%d", &b);

    /*
     * Ein Fehler war im Schleifenkopf der while Schleife. "a - b" muss nämlich ">= 0" sein nud nicht "> 0"
     * Ausserdem sollte vor der Division geprüft werden, ob die eingelesene Zahl eine "0" ist. Falls dies der Fall ist, beendigung des Programms und Fehlermeldung ausgeben.
     * Abgesehen davon, sollte man auch folgende Szenarios überprüfen: a ist kleiner als b, a oder b sind negativ, ergebnis mit Rest
     */

    // Dies soll Integer-Division a / b umsetzen:
    while (a - b >= 0) {
        result++;
        a = a - b;
    }

    printf("%d\n", result);

    /*
     * Den Fehler habe ich gefunden, indem ich im Kopf das Programm durchgegangen bin.
     * Bei koplexen Programmen ist das aber nicht möglich, bzw. extrem ineffizient, weshalb man den Debugger nutzen sollte.
     * Bei trivialen Programmen reicht aber meist auch schon ein scharfer Blick.
     */

}