#include <stdio.h>

// die eingabe darf maximal 20 bei long long sein
// die eingabe darf maximal 20 bei unsigned long long sein
// die eingabe darf maximal 16 bei int und maximal 17 bei unsigned int sein

int main() {
    unsigned int fak = 1;
    int eingabe = 0;
    printf("Geben Sie eine Zahl zur berechnung der Fakultaet ein: \n");
    scanf("%d", &eingabe);

    for (int i = 1; i <= eingabe; i++) {
        if (fak * i < 0) {
            printf("Maximaler Wert ist %d\n", i - 1);
            break;
        }
        fak = fak * i;
    }

    printf("%d! ergibt: %u\n", eingabe, fak);

    return 0;
}
