#include <stdio.h>

int main() {
    double ergebnis = 0;
    for(double i = 1; i <= 100000; i++) {
        ergebnis += 1 / i;
    }
    printf("%f\n", ergebnis);
    float x = 0.1;
    float y = 0.3;
    float z = x + y;
    printf("%f\n", z);
    printf("%d\n", 0.1 + 0.3 == 0.4);
    return 0;
}
