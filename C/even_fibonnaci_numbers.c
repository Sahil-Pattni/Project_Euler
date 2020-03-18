int find_sum(int limit) {
    long long int f1 = 0;
    long long int f2 = 2;
    long long int sum = f1 + f2;

    while (f2 < limit) {
        long long int f3 = 4 * f2 + f1;
        if (f3 > limit) break;

        f1 = f2;
        f2 = f3;
        sum += f2;
    }
    return sum;
}

int main() {
    printf("%d\n", find_sum(4000000));
    return 0;
}
