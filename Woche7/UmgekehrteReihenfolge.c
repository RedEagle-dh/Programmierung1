// Created by David Hermann on Win10 with CLion (MinGW)

#include <stdio.h>
#define ARRAYLENGTH(a) (sizeof(a)/sizeof(a[0]))

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void reverse (int arr[], int n) {
    int tmp2;
    for (int i = 0; i < n/2; i++) {
        tmp2 = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp2;
    }
}



int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    printArray(arr, (ARRAYLENGTH(arr)));
    reverse(arr, (ARRAYLENGTH(arr)));
    printArray(arr,(ARRAYLENGTH(arr)));
    return 0;
}
