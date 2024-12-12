#include <stdio.h>

int EKUB(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return EKUB(b, a % b);  
}
int EKUK(int a, int b) {
    return (a * b) / EKUB(a, b);
}

int main() {
    int a, b;
    printf("a va b sonlarini kiriting: ");
    scanf("%d %d", &a, &b);
    printf("EKUK: %d\n", EKUK(a, b));

    return 0;
}
