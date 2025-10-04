#include <stdio.h>
float average(float a, float b, float c) {
    return (a + b + c) / 3;
}
int main() {
    float num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    float result = average(num1, num2, num3);
    printf("Average = %.2f\n", result);
    return 0;
    }
