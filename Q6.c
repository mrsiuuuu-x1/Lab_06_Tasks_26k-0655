#include <stdio.h>

int main() {
    int a,b;
    a = 1;
    b = 1;
    int generation[10];

    for (int i = 2; i <= 9; i++) {
        int sum = a + b;
        generation[i] = sum;
        a = b;
        b = sum;
        printf("\n%d", generation[i]);
    }
}