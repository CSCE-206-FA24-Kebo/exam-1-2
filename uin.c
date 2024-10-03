/*******************************************************************************
 * File: uin.c
 * 
 * Description: This program validates Universal Identification Numbers (UINs)
 *              for Texas A&M University.
 * 
 * Author: [Student Name]
 * UIN: [Student UIN]
 * 
 * Date: [Current Date]
 ******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define UIN_LENGTH 9

// Add all function prototypes here
int validateUIN(const char* uin);

int main() {
    char uin[UIN_LENGTH + 1];  // +1 for null terminator

    while (1) {
        printf("Enter a UIN (or 'q' to quit): ");
        scanf("%9s", uin);  // Limit input to 9 characters

        if (uin[0] == 'q' && strlen(uin) == 1) {
            printf("Exiting program...\n");
            break;
        }

        // TODO: Call validateUIN and print the result
        // Your code here
    }

    return 0;
}

/**
 * Validates a UIN based on the specified rules.
 * 
 * @param uin The UIN to validate.
 * @return 1 if the UIN is valid, 0 otherwise.
 */
int validateUIN(const char* uin) {
    // TODO: Implement the validation logic
    // 1. Check if the length is exactly 9
    // 2. Check if all characters are digits
    // 3. Check if it's not all zeros
    // 4. Calculate and verify the checksum

    // Your code here

    return 0;  // Placeholder return, replace with your logic
}

/**
 * Calculates the checksum for a UIN.
 * 
 * @param uin The UIN to calculate the checksum for.
 * @return The sum of all digits in the UIN.
 */
int calculateChecksum(const char* uin) {
    // TODO: Implement the checksum calculation
    // Sum all the digits in the UIN

    // Your code here

    return 0;  // Placeholder return, replace with your logic
}