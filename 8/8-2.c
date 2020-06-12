#include <stdio.h>

double Factorial(int n) {
    if (n <= 1) return 1;
    return (n * Factorial(n - 1));
}

double Counting(int n, int d) {
    return Factorial(n) / (Factorial(d) * Factorial(n - d));
}

int main() {
    double c = Counting(4,1)*Counting(11,2)*Counting(48,2);
    printf("%f - In how many ways can you take 12 cards from a deck of 52 cards so that there are exactly 2 cards of the same suit among them?\n", c);
    return 0;
}