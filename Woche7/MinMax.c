#include <stdio.h>
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

int main() {
    int arr1[] = {-1, 0, -8, 12, 1, 2, 3, 4, 5, 6, 7, 8};
    int min, max, helpMin;
    for (int i = 0; i < NELEMS(arr1); i++) {
        helpMin = arr1[i];
        if (i == 0) {
            min = helpMin;
            max = helpMin;
        } else {
            if (helpMin > max) {
                max = helpMin;
            } else if (helpMin < min) {
                min = helpMin;
            }
        }
    }
    printf("%d min %d max\n", min, max);

    return 0;
}
