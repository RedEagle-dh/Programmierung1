#include <stdio.h>

int main() {
    char name[100];
    printf("Wie lautet dein Name?\n");
    scanf("%s", name);
    printf("Hallo %s!", name);
    return 0;
}
