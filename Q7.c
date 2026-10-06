#include <stdio.h>

int main() {
    int num;
    int reversed = 0;
    int last = 0;
    int temp = 0;

    printf("\nEnter num: ");
    scanf("%d", &num);
    
    temp = num;
    while (temp != 0) {
        last = temp % 10;
        reversed = reversed * 10 + last;
        temp = temp / 10;
    }

    if (reversed == num) {
        printf("\nIs Palindrome!!");
    }
    else {
        printf("\nIs not a Palindrome!");
    }
}