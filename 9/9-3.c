#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int PrintArray(char** str, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; str[i][j] != '\0'; j++) {
            putchar(str[i][j]);
        }
    }
    return 0;
}
char** ReturnChangedArray(char** str, int n, int i) {
    int d = ++i;
    if (strlen(str[i]) % 3 == 0) {
        if (++i > n) {
            d = 0;
        }
        for (int j = 0; j < n; j++) {
            str[i][j] = str[d][j];
        }
        str[i][5] = '\0';
        return str;
    }
    else if (i > n-1) {
        return "false";
    }
    else {
        return ReturnChangedArray(str, n, i++);
    }
}
int main() {
    int n = 5;
    char** Str = (char ** )malloc(5*sizeof(char));
    for (int i = 0; i < 5; ++i) {
        Str[i] = (char * )malloc(5*sizeof(char));
    }
    Str[0] = "12234";
    Str[1] = "123456";
    Str[2] = "12158";
    Str[3] = "f484898ghjklui";
    Str[4] = "5465";
    PrintArray(Str, n);
    printf("\n\nChanged array:\n");
    if (ReturnChangedArray(Str, n, 0) == "false") {
        printf("There is no row in the array with the number of elements multiples of three.\n");
    }
    else {
        PrintArray(ReturnChangedArray(Str, n, 0), n);
    }
    return 0;
}