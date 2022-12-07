#include <stdio.h>
#include <stdbool.h>


bool mauern (int klein, int gross, int ziel) {
    klein = klein * 1;
    gross = gross * 5;
    if (klein + gross >= ziel) return true;
    else return false;
}
int main() {
    int klein, gross, ziel;
    printf("Geben Sie zunaechst die Anzahl der kleinen, dann der grossen Steine an und zuletzt das Ziel.\n");
    scanf("%d %d %d", &klein, &gross, &ziel);
    printf("%s", mauern(klein, gross, ziel) ? "true" : "false");
    return 0;
}
