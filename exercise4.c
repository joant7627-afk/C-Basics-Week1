
#include <stdio.h> //  I'm Including the standard input/output 
int main() {
    int n; // Declaring a variable to enter the number
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);  // Read the number entered by the user
    // Check if the number is positive or non-positive
    if (n > 0) {
        printf("Positive");  // If the number is greater than 0
    } else {
        printf("Non-positive");  // If the number is less than or equal to 0
    }
    return 0;
    }
