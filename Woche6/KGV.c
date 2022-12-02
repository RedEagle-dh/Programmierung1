#include <stdio.h>
int ggT(int a, int b) {
    if (a == 0)
        return b;
    while (b != 0) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int kgV (int a, int b) {
    return (a * b) / ggT(a, b);
}

int main() {
    int a, b;
    printf("Geben Sie zuerst die groessere, dann die kleinere Zahl ein!\n");
    scanf("%d %d", &a, &b);
    printf("Das KGV von %d und %d ist %d.\n", a, b, kgV(a, b));
    return 0;
}
