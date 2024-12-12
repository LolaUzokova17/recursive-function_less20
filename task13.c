#include <stdio.h>

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int N;
    printf("Sonni kiriting: ");
    scanf("%d", &N);
    printf("%d ning faktoriali: %d\n", N, factorial(N));

    return 0;
}
