#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for the block of 18 digits for fiveDigits
    int *fiveDigits = (int *)malloc(sizeof(int) * 18); // Adjusted to 18
    if (fiveDigits == NULL) {
        printf("Memory allocation failed for five digits.\n");
        return 1;
    }

    // Allocate memory for the block of 18 digits for fourDigits
    int *fourDigits = (int *)malloc(sizeof(int) * 18); // Adjusted to 18
    if (fourDigits == NULL) {
        printf("Memory allocation failed for four digits.\n");
        free(fiveDigits); // Free previously allocated memory
        return 1;
    }

    // Manual assignment of values
    fiveDigits[0] = 18900;
    fiveDigits[1] = 21900;
    fiveDigits[2] = 22900;
    fiveDigits[3] = 27900;
    fiveDigits[4] = 28900;
    fiveDigits[5] = 28900;
    fiveDigits[6] = 29900;
    fiveDigits[7] = 30900;
    fiveDigits[8] = 1000;   // Changed from 01024 to 1024
    fiveDigits[9] = 3000;    // Changed from 03024 to 3024
    fiveDigits[10] = 9000;   // Changed from 09024 to 9024
    fiveDigits[11] = 10000;
    fiveDigits[12] = 11000;
    fiveDigits[13] = 12000;
    fiveDigits[14] = 14000;
    fiveDigits[15] = 15000;
    fiveDigits[16] = 16000;
    fiveDigits[17] = 17000;

    fourDigits[0] = 1105;
    fourDigits[1] = 2348;
    fourDigits[2] = 153;    // Changed from 0153 to 153
    fourDigits[3] = 2248;
    fourDigits[4] = 119;     // Changed from 0119 to 119
    fourDigits[5] = 1532;
    fourDigits[6] = 100;     // Changed from 0100 to 100
    fourDigits[7] = 43;       // Changed from 0043 to 43
    fourDigits[8] = 2331;
    fourDigits[9] = 2316;
    fourDigits[10] = 2344;
    fourDigits[11] = 44;      // Changed from 0044 to 44
    fourDigits[12] = 2244;
    fourDigits[13] = 2226;
    fourDigits[14] = 442;     // Changed from 0442 to 442
    fourDigits[15] = 2227;
    fourDigits[16] = 2354;
    fourDigits[17] = 138;     // Changed from 0138 to 138

    // Display the values in a table format
    printf("Table of Values:\n");
    printf("Index   Five-Digits   Four-Digits\n");
    printf("---------------------------------\n");
    for (int i = 0; i < 18; i++) {  // Adjusted loop to iterate 18 times
        printf("%-7d %-13d", i + 1, fiveDigits[i]);
        if (i < 18) {  // Print fourDigits values (18 elements)
            printf("%d", fourDigits[i]);
        }
        printf("\n");
    }

    // Free the allocated memory
    free(fiveDigits);
    free(fourDigits);

    return 0;
}
