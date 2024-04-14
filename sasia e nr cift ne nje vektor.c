#include <stdio.h>

int count_even(int *vec, int n) {
    if (n == 0) {
        return 0;
    }
    if (vec[n - 1] % 2 == 0) {
        return 1 + count_even(vec, n - 1);
    }
    return count_even(vec, n - 1);
}

int main() {
    int n;
    printf("Vendosni numrin e elementeve te vektorit: ");
    scanf("%d", &n);

    int vec[n];
    printf("Zgjidhni elementet e vektorit tuaj: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }

    int count = count_even(vec, n);
    printf("Sasia e numrave tek ne vektorin e dhene eshte %d.\n", count);

    return 0;
}
