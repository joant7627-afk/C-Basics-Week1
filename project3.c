#include<stdio.h>
int main()
{
int num1, num2;
printf("enter the first number:");
scanf("%d", &num1);
printf("enter the second number:");
scanf("%d", &num2);
printf("\nsum = %d\n", num1 + num2);
printf("deference = %d\n", num1 - num2);
printf("product = %d\n", num1 * num2);
if (num2 != 0){
printf("Quotient= %d\n",num1/num2);
}else{
printf("quotient= undefined(divide by zero)\n");
}
return 0;
}

