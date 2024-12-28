#include <stdio.h>

void inverted_number_pyramid() {
    int rows = 5; // Number of rows
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (int j = 0; j < i; j++) {
            printf("");
        }
        // Print numbers in descending order
        for (int k = rows; k > i; k--) {
            printf("%d ", k);
        }
        printf("\n"); // Move to the next line after each row
    }
}

int main() {
    inverted_number_pyramid(); // Call the function to display the pattern
    return 0;
}