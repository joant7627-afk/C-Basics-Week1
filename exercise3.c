#include <stdio.h>
int main() 
{
    float length, width, area;
    // Askinh the user to display length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    // Calculating area
    area = length * width;
    // Displaying the result
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}
