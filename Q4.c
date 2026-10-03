#include <stdio.h>

int main() {
    int marks[15] = {87,75,99,100,97,96,77,59,68,95,98,90,85,88,80};
    int count = 0;
    int total = 0;
    double avg = 0.0;
    int high = -1;
    int low = 99;

    for (int i = 0; i < 15; i++) {
        marks[i] = marks[i] + 5;
        if ((marks[i]) > 100) {
            marks[i] = 100;
        }
        if (marks[i] == 100) {
            count += 1;
        }
        if (marks[i] > high) {
            high = marks[i];
        }
        if (marks[i] < low) {
            low = marks[i];
        }
        total += marks[i];
    }
    int difference = high - low;
    avg = total / 15.0;
    printf("New Class Average: %.2f", avg);
    printf("\nDifference between high and low: %d",difference);
    printf("\nStudents who got 100 marks: %d", count);
}