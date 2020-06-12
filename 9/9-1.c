#include <stdio.h>
#include <string.h>
char * ss(char * s){
    char * nString = " ";
    for (int i = 0; i<strlen(s); i++) {
        nString[i] = (char)(((int)s[i])+1);
        putchar(nString[i]);
    }
}
int main() {
    char * s = "In how many ways can you take?";
    char * n = ss(s);
    return 0;
}