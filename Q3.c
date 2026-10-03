#include <stdio.h>

int main() {
    int stock[10] = {12,13,18,25,10,11,123,120,90,95};
    int minimum[10] = {10,25,20,20,5,10,150,100,60,100};
    int total = 0;
    int required = 0;
    int high = -1;

    for (int i = 0; i < 10; i++) {
        if (stock[i] < minimum[i]) {
            required = minimum[i] - stock[i];
            total += required;
            printf("\nThis order '%d' requires '%d' reorders.", i+1, required);
            if (required > high) {
                high = required;
            }
        }
    }
    printf("\nTotal items reordered: %d", total);
    printf("\nHighest item reordered: %d", high);
}