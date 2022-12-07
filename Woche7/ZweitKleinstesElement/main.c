#include <stdio.h>
#define ARRAYLENGTH(array) (sizeof(array)/ sizeof((array)[0]))

int kleinstes (int arr[], int n) {
    int min, counter = 0, helpCounter = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            min = arr[i];
        } else {
            helpCounter++;
            if (arr[i] < min) {
                min = arr[i];
                counter += helpCounter;
                helpCounter = 0;
            }
        }
    }
    return counter;
}

int zweitkleinstes (int arr[], int n) {
    int secMin, min, counter = 1, helpCounter = 1, minCounter = 0, xCounter;
    for (int i = 1; i < n; i++) {
        if (i == 0) {
            if (i + 1 != n) {
                secMin = arr[i + 1];
                min = arr[i];
            } else {
                break;
            }
        } else {
            helpCounter++;
            printf("Zahl %d an stelle %d. Helpcounter steht:%d Counter steht:%d\n", arr[i], i, helpCounter, counter);
            if (arr[i] < secMin && arr[i] > min) {
                secMin = arr[i];
                counter = counter + helpCounter;
                helpCounter = 1;
            } else if (arr[i] < secMin && arr[i] < min) {
                secMin = min;
                min = arr[i];
                xCounter = counter;
                counter = minCounter;
                minCounter = xCounter;
            }
        }
    }
    return counter;
}

int main() {
    int arr[] = {4,8,2,5,6,7, 3, 1};
    printf("Kleinstes Element an Index: %d\nZweitkleinstes Element an Index: %d", kleinstes(arr, ARRAYLENGTH(arr)), zweitkleinstes(arr, ARRAYLENGTH(arr)));
    return 0;
}
