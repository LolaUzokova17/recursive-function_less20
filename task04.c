#include <stdio.h>

void func(int n) {
    if (n <= 0) {
        return;
    }
    if (n % 2 != 0) {
        func(n - 2); 
        printf("%d ", n);
    } else {
        func(n - 1);
    }
}

int main() {
    func(5);

    printf("\n");

    return 0;
}
