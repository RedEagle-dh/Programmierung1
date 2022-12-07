// Created by David Hermann on Win 10 (CLion)

#include <stdio.h>
#include <math.h>
int main() {
    double pi = 0;
    for (double i = 0; i <= 1000000; i++) {
        pi += pow((-1),i) / ((2 * i) + 1);
    }
    printf("Pi ist mit der Leibniz Reihe ungefaehr %f\n", pi*4);

    double pi2 = 1;
    for (double i = 2; i <= 1000000; i += 2) {

        pi2 *= (i / (i - 1)) * (i / (i + 1));
    }
    printf("Pi ist mit dem Wallis'schen Produkts ungefaehr %f\n", pi2*2);


    return 0;
}
