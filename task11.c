#include <stdio.h>

void func(int N, int current) {
    if (current > N) {
        return;
    }
    if (current % 2 == 0) {
        printf("%d ", current);
    }
    func(N, current + 1);
}

int main() {
    int N;
    printf("N sonini kiriting: ");
    scanf("%d", &N);
    func(N, 1);
    printf("\n"); 

    return 0;
}