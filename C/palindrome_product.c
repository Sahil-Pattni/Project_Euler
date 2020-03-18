#include <stdio.h>
#include <math.h>

int isPalindrome(n) {
    int t = n;
    int r = 0;

    while (t != 0) {
        r *= 10;
        r += t%10;
        t /= 10;
    }
    return (r==n);
}

int largestPalindromeProduct() {
    int largest = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (isPalindrome(i*j)) {
                if ((i*j) > largest)
                    largest = i*j;
            }
        }
    }
    return largest;
}

int main() {
    printf("Largest: %d\n", largestPalindromeProduct());
}
