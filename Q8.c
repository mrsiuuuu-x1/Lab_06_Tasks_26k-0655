#include <stdio.h>

int main() {
    int seats[15] = {0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1};
    int count_empty = 0;
    int count_booked = 0;
    
    int first_available = -1;
    int last_available = -1;
    int newly_booked = 0;

    for (int i = 0; i < 15; i++) {
        if (seats[i] == 1) {
            count_booked++;
        } else {
            count_empty++;

            if (first_available == -1) {
                first_available = i + 1;
            }
            last_available = i + 1;
        }
    }

    printf("Total Booked Seats: %d\n", count_booked);
    printf("Total Empty Seats: %d\n", count_empty);
    printf("First available seat number: %d\n", first_available);
    printf("Last available seat number: %d\n", last_available);

    for (int i = 0; i < 15; i++) {
        if (seats[i] == 0 && newly_booked < 3) {
            seats[i] = 1;
            newly_booked++;
        }
    }

    printf("\nFinal Seating Chart: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", seats[i]);
    }
    printf("\n");

    return 0;
}