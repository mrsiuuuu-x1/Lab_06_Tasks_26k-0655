#include <stdio.h>

int main() {
    int transfers[10] = {5000,50,12000,500000,20,8000,25000,300,450000,15000};
    int less100 = 0;
    int more200000 = 0;
    int flagged = 0;
    double total = 0.0;
    int normal = 0;
    double avg = 0.0;
    int largest = -1;

    for (int i = 0; i <= 9; i++) {
        if (transfers[i] < 100) {
            less100 += 1;
            flagged += 1;
            printf("\nToo Low");
        }
        else if(transfers[i] > 200000) {
            more200000 += 1;
            flagged += 1;
            printf("\nToo Large");
        }
        else {
            total += transfers[i];
            normal += 1.0;
            if (transfers[i] > largest) {
                largest = transfers[i];
            }
        }
    }
    avg = total / normal;
    printf("\nTotal transfers less than 100: %d", less100);
    printf("\nTotal transfers more than 200,000: %d", more200000);
    printf("\nTotal transfers flagged: %d", flagged);
    printf("\nLargest Amount Transferred: %d", largest);
    printf("\nAverage Transfer Amount: %.2f", avg);
}