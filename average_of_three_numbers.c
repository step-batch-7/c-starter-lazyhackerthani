#include<stdio.h>
int get_average_of_three(int,int,int);
int main()
{
  int number1,number2,number3;
  printf("enter a number:");
  scanf("%d", &number1);
   printf("enter another number:");
  scanf("%d", &number2);
  printf("enter another number:");
  scanf("%d", &number3);
  int average = get_average_of_three(number1, number2,number3);
  printf("average of three numbers is %d", average);
  return 0;
}

int get_average_of_three(int number1,int number2,int number3){
  return (number1 + number2 + number3) / 3;
}