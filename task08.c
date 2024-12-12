#include <stdio.h>

void func(int N) {
    if (N <= 0) {
        return;
    }
    printf("Hello Code\n");
    func(N - 1);
}

int main() {
    int N;
    printf("N sonini kiriting: ");
    scanf("%d", &N);
    func(N);

    return 0;
}
