#include <stdio.h>

void func(int n){

    if(n % 2 == 0)
        printf("%d ", n);

    if(n != 1)
        func(n - 1);
}

int main(){ 

    func(8);

    return 0;
}   