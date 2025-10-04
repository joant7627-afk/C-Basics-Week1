#include <stdio.h>
int main() {
    // Declaring the variables 
    char name[50];
    int age;
   // Ask for user input
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    // Displaying the result and all the details 
    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;
}
