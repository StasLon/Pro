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

int sumAfMin(int array[], int n){
    int min = minimal(array, n), sum = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] == min){
            for (int j = i+1; j < n; ++j) {
                sum+= array[i];
            }
        }
    }
    return sum;
}

int countNegative(int array[], int n){
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (array[i] < 0){
            count++;
        }
    }
    return count;
}

int main() {
    int max = 100, min = -100, n = 100;
    srand(time(NULL));
    int array[100];
    for (int i = 0; i < n; i++) {
        array[i] = min + rand() % (max - min + 1);
        printf("%d ", array[i]);
    }
    printf("\nNumber of negative numbers - %d", countNegative(array, n));
    printf("\nthe sum of the elements after a negative number - %d", sumAfMin(array, n));
    return 0;
}