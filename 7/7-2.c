#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int sum(int * array, int n){
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        if(array[i] < 0){
            for (int j = i+1; array[j] < 0 && j < n; ++j) {
                sum += array[j];
            }
            return sum;
        }
    }
    return sum;
}

int count(int * array, int n){
    int  count = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i]<7){
            count++;
        }
    }
    return count;
}

int main() {
    int n = 40;
    int *array = (int *) calloc(n, sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < n; ++i) {
        array[i] = -100 + rand() % (100 + 100 + 1);
    }

    printf("\n\n"
           "number of items below 7.  - %d", count(array, n));
    printf("\nThe sum of the elements between the first and second positive element  - %d", sum(array, n));
    return 0;
}
