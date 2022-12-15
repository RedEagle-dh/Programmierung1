#include <stdio.h>


int max(int feld[], int n) {
    int max = feld[0], index = 0;
    for (int i = 1; i < n; i++) {
        if (feld[i] > max) {
            max = feld[i];
            index = i;
        }
    }
    return index;
}


int kleinsteDurchVier(int arr[], int n) {
    int kleinsteZahl = 0;
    for (int i = 0; i < n; i++) {
        kleinsteZahl = ((arr[i] % 4 == 0) && kleinsteZahl == 0) ? arr[i] : (kleinsteZahl > arr[i] && arr[i] % 4 == 0) ? arr[i] : kleinsteZahl;
    }
    return kleinsteZahl;
}


int luckySum(int a, int b, int c) {
    return a != 13 ? b != 13 ? c != 13 ? a + b + c : a + b : a : 0;
}


int seriesUp(int f[], int n) {
    int index = 0, newN = 1;
    for (int i = 0; i < n; i++) {
        int zahl = 1;
        while (zahl <= newN) {
            f[index] = zahl;
            index++;
            zahl++;
        }
        newN++;
    }
    return n * (n + 1) / 2;
}


int main() {
    int feld[7] = {
            1, 2, 5, 6, 7, 12, 16
    };
    int N = 4;
    int f[N * (N+1) / 2];
    seriesUp(f, N);
    //printf("%d\n", luckySum(13, 2, 3));
    //printf("%d", kleinsteDurchVier(feld, 7));
    return 0;
}
