#include <stdio.h>
#include <math.h>

int evenlyDivisible(int n) {
    for (int i = 1; i <= 20; i++) {
        if (n % i != 0)
            return 0;
    }
    return 1;
}

int smallestMultiple() {
    int i = 2520; // smallest multiple from 1 to 10

    while (1) {
        if (evenlyDivisible(i))
            return i;
        i++;
    }
}

int main() {
    printf("%d\n", smallestMultiple());
}

