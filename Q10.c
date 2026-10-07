#include <stdio.h>

int main() {
    int amount;
    int withdraw = 0;
    int transaction = 0;

    do
    {
        printf("\nEnter amount you want to withdraw: ");
        scanf("%d", &amount);

        withdraw += amount;
        transaction += 1;
        if (amount == 0) {
            transaction -= 1;
        } else if (amount < 0) {
            printf("\nEnter a valid amount!");
        }
    } while (amount != 0);
    
    printf("\n---------- TRANSACTION HISTORY ----------");
    printf("\nTotal Transactions done: %d", transaction);
    printf("\nTotal amount withdrawn: %d", withdraw);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n-------------- THANK YOU ----------------");
}