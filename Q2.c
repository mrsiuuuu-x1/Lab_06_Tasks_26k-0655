#include <stdio.h>
#include <ctype.h>

int main() {
    char pass1[20] = "StrongPass1";
    char pass2[20] = "admin123";
    char pass3[20] = "weak";
    char pass4[20] = "1234567";
    char pass5[20] = "ONLYUPPER";

    int score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0;
    int below_10_count = 0;
    int max_score = -999;
    int strongest = 1;
    int length, has_123;

    length = 0;
    has_123 = 0;
    for (int i = 0; pass1[i] != '\0'; i++) {
        length++;
        
        if (islower(pass1[i])) score1 += 1;
        else if (isupper(pass1[i])) score1 += 2;
        else if (isdigit(pass1[i])) score1 += 3;

        if (pass1[i] == '1' && pass1[i+1] == '2' && pass1[i+2] == '3') {
            has_123 = 1;
        }
    }
    if (length >= 8) score1 += 5;
    if (has_123 == 1) score1 -= 3;
    
    printf("Password 1: %s - Score: %d\n", pass1, score1);
    if (score1 < 10) below_10_count++;
    if (score1 > max_score) { max_score = score1; strongest = 1; }

    length = 0;
    has_123 = 0;
    for (int i = 0; pass2[i] != '\0'; i++) {
        length++;
        
        if (islower(pass2[i])) score2 += 1;
        else if (isupper(pass2[i])) score2 += 2;
        else if (isdigit(pass2[i])) score2 += 3;

        if (pass2[i] == '1' && pass2[i+1] == '2' && pass2[i+2] == '3') {
            has_123 = 1;
        }
    }
    if (length >= 8) score2 += 5;
    if (has_123 == 1) score2 -= 3;

    printf("Password 2: %s - Score: %d\n", pass2, score2);
    if (score2 < 10) below_10_count++;
    if (score2 > max_score) { max_score = score2; strongest = 2; }

    length = 0;
    has_123 = 0;
    for (int i = 0; pass3[i] != '\0'; i++) {
        length++;
        
        if (islower(pass3[i])) score3 += 1;
        else if (isupper(pass3[i])) score3 += 2;
        else if (isdigit(pass3[i])) score3 += 3;

        if (pass3[i] == '1' && pass3[i+1] == '2' && pass3[i+2] == '3') {
            has_123 = 1;
        }
    }
    if (length >= 8) score3 += 5;
    if (has_123 == 1) score3 -= 3;

    printf("Password 3: %s - Score: %d\n", pass3, score3);
    if (score3 < 10) below_10_count++;
    if (score3 > max_score) { max_score = score3; strongest = 3; }

    length = 0;
    has_123 = 0;
    for (int i = 0; pass4[i] != '\0'; i++) {
        length++;
        
        if (islower(pass4[i])) score4 += 1;
        else if (isupper(pass4[i])) score4 += 2;
        else if (isdigit(pass4[i])) score4 += 3;

        if (pass4[i] == '1' && pass4[i+1] == '2' && pass4[i+2] == '3') {
            has_123 = 1;
        }
    }
    if (length >= 8) score4 += 5;
    if (has_123 == 1) score4 -= 3;

    printf("Password 4: %s - Score: %d\n", pass4, score4);
    if (score4 < 10) below_10_count++;
    if (score4 > max_score) { max_score = score4; strongest = 4; }

    length = 0;
    has_123 = 0;
    for (int i = 0; pass5[i] != '\0'; i++) {
        length++;
        
        if (islower(pass5[i])) score5 += 1;
        else if (isupper(pass5[i])) score5 += 2;
        else if (isdigit(pass5[i])) score5 += 3;

        if (pass5[i] == '1' && pass5[i+1] == '2' && pass5[i+2] == '3') {
            has_123 = 1;
        }
    }
    if (length >= 8) score5 += 5;
    if (has_123 == 1) score5 -= 3;

    printf("Password 5: %s - Score: %d\n", pass5, score5);
    if (score5 < 10) below_10_count++;
    if (score5 > max_score) { max_score = score5; strongest = 5; }

    printf("\nPasswords scoring below 10: %d\n", below_10_count);

    printf("The strongest password is: ");
    if (strongest == 1) {
        printf("%s", pass1);
    } else if (strongest == 2) {
        printf("%s", pass2);
    } else if (strongest == 3) {
        printf("%s", pass3);
    } else if (strongest == 4) {
        printf("%s", pass4);
    } else if (strongest == 5) {
        printf("%s", pass5);
    }
    
    printf(" (Score: %d)\n", max_score);

    return 0;
}