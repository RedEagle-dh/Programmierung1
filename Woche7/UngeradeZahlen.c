#include <stdio.h>
#define ARRAYLENGTH(array) (sizeof(array)/sizeof((array)[0]))


int countOdds(int f[], int n) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (f[i] % 2 == 1) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int array1[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int array2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 21};

    printf("%d", countOdds(array, ARRAYLENGTH(array)));
    return 0;
}
