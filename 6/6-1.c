#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
double calc(int a){
    return (sqrt(a)+a+pow(a,2));
}

int main() {
    double c = calc(2)/calc(3)+calc(5)/calc(7)+calc(6)/calc(9)+calc(4)/calc(8);
    printf("%f", c);
    return 0;
}