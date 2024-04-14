#include <stdio.h>

int is_symmetric(int *vec, int n) {
    if (n == 1) {
        return 1;
    }
    if (vec[0] != vec[n - 1]) {
        return 0;
    }
    return is_symmetric(vec + 1, n - 2);
}

int main() {
    int n;
    printf("Vendos numrin e elementeve te vektorit: ");
    scanf("%d", &n);

    int vec[n];
    printf("Vendos elementet: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }

    if (is_symmetric(vec, n)) {
        printf("Vektori eshte simetrik\n");
    } else {
        printf("Vektori nuk eshte simetrik\n");
    }

    return 0;
}
