#include<stdio.h>
int main()
{
// print my information
printf("my name:joan tembo");
printf("my age:2o\n");
printf("my favorite hobby:is singing\n");
//get your information
char name[50];
int age;
printf("enter your name: ");
scanf("%s", name);
printf("enter your age: ");
scanf("%d", &age);
//printf greating message
printf("\nhello %s! you are %d years old.coding!\n",name,age);
return 0;
}

