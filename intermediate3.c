#include <stdio.h>
int main() {
    int i, n; //I'm declaring variables here 
    // I'm asking the user to enter the number
    printf("Enter n: ");
    scanf("%d", &n);
    // I'm trying Loop from 1 to n
    for (i = 1; i <= n; i++) {
        // isthe number is even
        if (i % 2 == 0) {
            printf("%d ", i); // Printing  even numbers
        } else {
            printf("[%d] ", i);// Print odd numbers 
        }
    }
    return 0;  // the program is successfully executed 
}
