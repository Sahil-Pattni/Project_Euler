int iterate_all(limit) {
    int sum = 0;
    for (int i = 0; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int limit = 1000;
    int sum = iterate_all(limit);
    printf("Sum of multiples of 3 or 5 under %d: %d\n", limit, sum);
    return 0;
}
