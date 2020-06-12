#include <stdio.h>
#include <string.h>

void append(char* s, char c) {
    int len = strlen(s);
    s[len] = c;
    s[len+1] = '\0';
}

char * ss(char * s){
    char * newArray = "";
    int wordCount = 0;
    for (int i = 0, d = 0; i<strlen(s); i++, d++) {
        char * tmp = " ";
        wordCount = 0;
        for (int l = 0, j = i; s[j]!=' ' && j < strlen(s); ++j, l++) {
            wordCount++;
            tmp[l] = s[j];
            i = j;
        }
        if (wordCount % 2 != 0){
            for (int j = 0; j < wordCount; ++j) {
                append(newArray, tmp[j]);
            }
            append(newArray, ' ');
        }
    }
    return newArray;
}

int main() {
    char * s = "In how many ways can you take?";
    puts(ss(s));

    return 0;
}