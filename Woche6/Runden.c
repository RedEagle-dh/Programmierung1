#include <stdio.h>

int rundeZahl(int x) {
    return (x % 10 == 0) ? x : (x % 10 < 5 && x % 10 > 0) ? (x - x % 10) : (x + (10 - x % 10));
}

int rundeSumme (int a, int b, int c) {
    return (rundeZahl(a) + rundeZahl(b) + rundeZahl(c));
}
int main() {
    printf("%d\n", rundeSumme(120, 120, 120));
    return 0;
}
