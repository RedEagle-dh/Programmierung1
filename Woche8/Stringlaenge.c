#include <stdio.h>


unsigned string_length(char str[]) {
    int length = 0, counter = 0;
    while (str[counter] != '\0') {
        length++;
        counter++;
    }
    return length;
}

int main() {
    char array[] = "Hey my name is Dave!";
    printf("Die laenge von ->%s<- ist %d.\n", array, string_length(array));
    return 0;
}
