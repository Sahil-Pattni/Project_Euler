#include <math.h>
#include <stdio.h>

int largest_prime_factor(unsigned long long int n) {
    long long max_prime = -1;

    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }

    for (int i = 3; i < sqrt(n); i+=2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }

    if (n > 2) max_prime = n;

    return max_prime;
}

int main() {
    unsigned long long int n = 600851475143;
    printf("Largest prime of %lld is %d\n", n, largest_prime_factor(n));
    return 0;
}
