#include <stdio.h>
#include <stdbool.h>
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

bool firstLast8 (int arr[], int n) {
    if (arr[0] == 8 || arr[n - 1] == 8) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 8};
    printf("%s", (firstLast8(arr, NELEMS(arr)) == 0) ? "false" : "true");
    return 0;
}
