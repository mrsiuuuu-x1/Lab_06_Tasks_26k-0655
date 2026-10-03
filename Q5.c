#include <stdio.h>

int main() {
    int notes500[5] = {10,5,8,12,6};
    int notes200[5] = {20,15,10,8,14};
    int notes100[5] = {30,25,40,35,20};
    int total = 0;
    int amount;

    printf("Enter amount: ");
    scanf("%d", &amount);
    
    for (int i = 0; i < 5; i++) {
        total += (notes500[i] * 500) + (notes200[i] * 200) + (notes100[i] * 100);
    }

    if (amount > total) {
        printf("\nInsufficient funds");
    } else if ((amount % 100) != 0) {
        printf("\nInvalid Amount");
    }
    else {
        printf("\nTransaction Apporved");
    }
}