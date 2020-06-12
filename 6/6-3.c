#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int minimal(int array[], int n){
    int min =100;
    for (int i = 0; i < n; ++i) {
        if (min>array[i]){
            min = array[i];
        }
    }
    return min;
}

int maximal(int array[], int n){
    int max =-100;
    for (int i = 0; i < n; ++i) {
        if (max<array[i]){
            max = array[i];
        }
    }
    return max;
}

int main() {
    int max = 100, min = -100, n = 100;
    srand(time(NULL));
    int array[100];
    for (int i = 0; i < n; i++) {
        array[i] = min + rand() % (max - min + 1);
        printf("%d ", array[i]);
    }
    printf("\nMaximal Element - %d", maximal(array, n));
    printf("\nMinimal Element - %d", minimal(array, n));
    return 0;
}