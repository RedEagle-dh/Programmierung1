#include <stdio.h>
int gewinn (int a, int b, int c) {
    if (a == b || b == c || a == c) {
        if (a == b && b == c) {
            return 20;
        }
        return 10;
    } else {
        return 0;
    }
}
int main() {
    int a, b, c;
    printf("Geben Sie 3 ganze Zahlen ein!\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", gewinn(a, b, c));
    return 0;
}
