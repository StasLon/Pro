
#include <stdio.h>
int product(n){
    if (n<=0) return 1;
    return n * product(n-1);
}

int main(){
    printf("%d", product(5));

    return 0;
}