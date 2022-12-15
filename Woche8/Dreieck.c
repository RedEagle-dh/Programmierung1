#include <stdio.h>
#include <string.h>


void dreieck(int anz_zeilen) {
    int arraySize = -1, counter = 1;
    for (int i = 0; i <= anz_zeilen + 1; i++) {
        arraySize += i;
    }
    char array[arraySize];

    memset(array,0,arraySize);

    for (int i = 0; i < anz_zeilen; i++) {
        for (int j = 0; j < counter; j++) {
            strcat(array, "X");
        }
        counter++;
        strcat(array, "\n");
    }
    strcat(array, "\0");
    printf("%s\n", array);
}



int main() {
    dreieck(10);
    return 0;
}
