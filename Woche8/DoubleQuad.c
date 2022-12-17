#include <stdio.h>
#include <string.h>
const int WIDTH = 5;

void doubleQuad(char art[][5], int width) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < width; j++) {
            art[i][j] = 'X';
        }
    }

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c ", art[i][j]);
        }
        putchar('\n');
    }
}

int main() {
    char array[WIDTH][WIDTH];
    doubleQuad(array, WIDTH);
    return 0;
}