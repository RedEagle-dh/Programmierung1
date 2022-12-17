#include <stdio.h>
#include <string.h>

void entferne(char str[], char c) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            for (int j = i; j < strlen(str); j++) {
                str[j] = str[j + 1];
            }
            break;
        }
    }
}


int main() {
    char str[] = "Weihnachten";
    printf("%s\n", str);
    entferne(str, 'n');
    printf("%s\n", str);
    return 0;
}