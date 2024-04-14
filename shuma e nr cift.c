#include <stdio.h>

int sum_even(int n) {
    if (n == 0) {
        return 0;
    }
    if (n % 2 == 0) {
        return n + sum_even(n - 2);
    }
    return sum_even(n - 1);
}

int main() {
    int n;
    printf("Vendos nje numer: ");
    scanf("%d", &n);

    int sum = sum_even(n);
    printf("Shuma e numrave cift nga 1 ne %d eshte %d.\n", n, sum);

    return 0;
}
