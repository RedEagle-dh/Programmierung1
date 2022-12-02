#include <stdio.h>

float holeWert (char c) {
    float value;
    printf("%c eingeben: ", c);
    scanf("%f", &value);
    return value;
}
float berechne (char eingabe, float x, float y) {
    if (eingabe == 'U') return x * y;
    else if (eingabe == 'I' || eingabe == 'R') return x / y;
    else return 0;
}
void zeigeErgebnis (char c, float x) {
    printf("%c betraegt: %f\n", c, x);
}

int main () {
    float u, r, i;
    char eingabe;
    printf("Geben Sie ein, ob Sie U, R oder I berechnen möchten:\n");
    scanf("%s", &eingabe);
    switch (eingabe) {
        case 'U': {
            i = holeWert('I');
            r = holeWert('R');
            u = berechne(eingabe, i, r);
            zeigeErgebnis('U', u);
            break;
        }
        case 'R': {
            i = holeWert('I');
            u = holeWert('U');
            r = berechne(eingabe, u, i);
            zeigeErgebnis('R', r);
            break;
        }
        case 'I': {
            r = holeWert('R');
            u = holeWert('U');
            i = berechne(eingabe, u, r);
            zeigeErgebnis('I', i);
            break;
        }
    }


    return 0;
}
