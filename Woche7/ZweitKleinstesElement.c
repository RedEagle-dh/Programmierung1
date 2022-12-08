// Created by David Hermann on Win10 with CLion (MinGW)
#include <stdio.h>
#define ARRAYLENGTH(array) (sizeof(array)/ sizeof((array)[0]))


// Funktion zur Berechnung des kleinsten Wertes im Array
int getMinValue(int arr[], int n) {
    int counterValue = arr[0];
    for (int i = 0; i < n; i++) {
        if (counterValue > arr[i]) {
            counterValue = arr[i];
        }
    }
    return counterValue;
}


// Funktion zur Bestimmung des Index vom kleinsten Wert im Array
int kleinstes (int arr[], int n) {
    int counter = 0;
    int kleinstes = getMinValue(arr, n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == kleinstes) {
            counter = i;
        }
    }

    return counter;
}


// Funktion zur Bestimmung des Index vom zweitkleinsten Wert im Array
int zweitkleinstes (int arr[], int n) {
    int counter = 0, counterValue = arr[1];
    int kleinstes = getMinValue(arr, n);
    for (int i = 0; i < n; i++) {
        if (counterValue >= arr[i] && arr[i] != kleinstes) {
            counter = i;
            counterValue = arr[i];
        }
    }
    return counter;
}

int main() {
    int arr[] = {4,2 ,8,5,6,6,7, 3, 1, 2};
    printf("Kleinstes Element an Index: %d\nZweitkleinstes Element an Index: %d", kleinstes(arr, ARRAYLENGTH(arr)), zweitkleinstes(arr, ARRAYLENGTH(arr)));
    return 0;
}
