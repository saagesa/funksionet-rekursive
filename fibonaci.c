#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Vendosni numrin e kufizave te vargut: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += fib(i);
    }

    printf("Shuma e %d kufizave te para te vargut eshte %d.\n", n, sum);

    return 0;
}
