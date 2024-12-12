#include <stdio.h>

void func(char str[], int length) {
    if (length <= 0) {
        return;
    }
    printf("%c", str[length - 1]);
    func(str, length - 1);
}

int main() {
    char str[100];
    printf("Stringni kiriting: ");
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    func(str, length);

    printf("\n"); 

    return 0;
}
