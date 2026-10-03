#include <stdio.h>

int main() {
    int high = -1;
    int low = 99;
    int index_high;
    int index_low;
    int count = 0;
    int total = 0;
    float avg = 0.0;
    int cars[12] = {11,14,20,5,8,19,11,19,21,1,0,3};
    
    for (int i = 0; i < 12; i++) {
        total += cars[i];
    }
    avg = total / 12.0;
    printf("\nThe average cars waiting: %.2f", avg);

    for (int j = 0; j < 12; j++) {
        if (cars[j] > avg) {
            count = count + 1;
        }
        if (cars[j] > high) {
            high = cars[j];
            index_high = j + 1;
        }
        if (cars[j] < low) {
            low = cars[j];
            index_low = j + 1;
        }
    }
    printf("\nAt signal %d the traffic is highest.", index_high);
    printf("\nAt signal %d the traffic is lowest.", index_low);
    printf("\nThe traffic signal being overloaded are: %d", count);
    int difference = high - low;
    printf("\nDifference between highest and lowest is: %d", difference);
}