#include <stdio.h>
#define ARRAYLENGTH(a) (sizeof(a)/sizeof(a[0]))

void swap (int arr1[], int arr2[], int len) {
    int tmp;
    for (int i = 0; i < len; i++) {
        tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
}

void printArrays(int arr1[], int arr2[], int len1) {
    printf("Array1 hat folgende Elemente:\n");
    for (int i = 0; i < len1; i++) {
        printf("%d\n", arr1[i]);
    }
    printf("Array2 hat folgende Elemente:\n");
    for (int i = 0; i < len1; i++) {
        printf("%d\n", arr2[i]);
    }
}

int main() {
    int array1[] = {1,2,3,4,5,6,7};
    int array2[] = {2,3,5,6, 10, 12, 15};
    printf("Vor dem Swap:\n");
    printArrays(array1, array2, ARRAYLENGTH(array1));
    swap(array1, array2, ARRAYLENGTH(array1));
    printf("\nNach dem Swap:\n");
    printArrays(array1, array2, ARRAYLENGTH(array1));
    return 0;
}
