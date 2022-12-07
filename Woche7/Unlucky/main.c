#include <stdio.h>
#include <stdbool.h>
#define ARRAYLENGTH(array) (sizeof(array)/ sizeof((array)[0]))


bool unlucky1 (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            if (i + 1 != n) {
                if (arr[i + 1] == 3) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, arr1[] = {1,3, 4, 5};
    int arr2[] = {2, 1, 3, 4, 5}, arr3[] = {1, 1, 8};


    printf("%s\n", unlucky1(arr3, ARRAYLENGTH(arr3)) == 0 ? "false" : "true" );
    return 0;
}
