#include <stdio.h>
#include <string.h>

int quad(char art[], int width) {

    // Bei dieser Methode werden zwischen den X Leerzeichen gesetzt.
    /*for (int i = 0; i < width; i++) {
        for(int j = 0; j < width; j++) {
            if (j % width == 0 && i != 0) {
                strcat(art, "\n");
            }
            strcat(art, "X ");
        }
    }
    for(int i = 0; i < (width * width) * 3; i++) {
        printf("%c", art[i]);
    }
    return strlen(art);*/


    // Bei dieser Methode werde zwischen den X keine Leerzeichen gesetzt.
    for (int i = 0; i < width; i++) {
        for(int j = 0; j < width; j++) {
            if (j % width == 0 && i != 0) {
                strcat(art, "\n");
            }
            strcat(art, "X");
        }
    }
    for(int i = 0; i < (width * width) + width - 1; i++) {
        printf("%c", art[i]);
    }
    return strlen(art);

}


int main() {
    char arr[1000] = "";
    int width = 3;
    printf("\n%d", quad(arr, width));
    return 0;
}
