#include <stdio.h>

int ggT(int a, int b) {
    if (a == 0) return b;

    while (b != 0) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int a, b;
    printf("Geben Sie 2 Zahlen ein:\n");
    scanf("%d %d", &a, &b);
    printf("Das GGT von %d und %d ist %d.\n", a, b, ggT(a, b));
    return 0;
}
