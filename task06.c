#include <stdio.h>

int EKUB(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return EKUB(b, a % b); 
}

int main() {
    int a, b;
    printf("a va b sonlarini kiriting: ");
    scanf("%d %d", &a, &b);
    printf("EKUB: %d\n", EKUB(a, b));

    return 0;
}
